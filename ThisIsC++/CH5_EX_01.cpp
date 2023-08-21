/*
	5장. 연산자 다중 정의

	이 장의 핵심 개념
	=> 기존에 사용하던 연산자와 달리 연산자 함수는 함수 형태로 연산자를 사용하므로 주요 연산 형태를 함수로 만든 다음 필요하면 다중 정의할 수가 있다.

	- 연산자 함수 : 연산자를 이용하듯 호출할 수 있는 메서드로 훨씬 간결하게 코드를 작성할 수 있게 해준다.
	- 연산자 다중 정의 : 필요에 따라 연산자 함수를 다중 정의하는 것을 말하며, 코드의 확장성을 높일 수 있다.


	5.1 연산자 함수란?
	 - 위에서 언급한 간결성과 확장성이라는 장점을 가진 연산자 함수에는 단점도 있다. 연산자 함수는 절대로 오류가 발생해서는 안된다.
	   함수는 반환 값을 보고 문제가 발생했을 때 원인을 확인할 수 있지만 연산자는 결과를 확인하는 일이 없다. 우리가 3+5가 8이라는 것을 의심하지 않는 것과 같은 이치이다.

	   또한 연산자 함수는 사용자 코드를 너무 간결하게 작성할 수 있게 하기 때문에 사용자 코드 쪽 문제를 찾기 훨씬 더 어려울 수 있다.
	   어쨌든 유용한 장점 덕분에 널리 사용된다는 사실은 부정할 수 없다.

	   그리고 "절대로 논리 연산자를 다중 정의해서는 안된다"는 사실을 명심해야 한다.
	   다중 정의할 수 없는 것은 아니지만, 이 경우에는 심각한 논리적 오류를 사용자에게 떠넘기는 꼴이 될 수 있기 때문이다.

	   => 하지만 이미 프로젝트에서 논리 연산자를 다중 정의해본적이 있는데 크게 문제된 적이 없었다... 
	   완벽하게 문제를 대비했다면 오히려 생산성을 높일 수도 있다고 생각한다.
	   일단 이 부분은 좀 생각해봐야할 것 같다.


	5.2 산술 연산자
	- int 같은 기본 자료형이라면 산술 연산의 사용이 자연스러운 것은 당연한다.
	  하지만 우리가 만든 클래스 ex.CMyData의 인스턴스인 data에 data + 3 같은 연산을 실행하면 아예 오류로 인식된다.

	  그러나 잘 생각해보면 숫자가 아닌 것들에 대해서도 얼마든지 '덧셈'을 할 수 있다.
	  예를 들어서 산이 그려진 그림과 태양이 그려진 그림을 포토샵에서 두 레이어로 나누었다가 하나로 합치면 한 레이어에 산과 태양이 모두 그려지는 것과 같은 이치이다.

	  여기서 중요한 점은 더해진 결과 자체가 아니라 '무엇이라도 덧셈할 수 있다'는 것이다.
	  다음 예제에선 일반적인 연산자 다중 정의의 예와 '이동 생성자가 호출되는 시점'을 설명한다.
	  우선 CMyData 클래스가 제공하는 연산자는 다음과 같다.

	  - operator int()							=> 형변환 연산자
	  - CMyData operator+(const CMyData &rhs)   => 덧셈 연산자
	  - CMyData& operator=(const CMyData &rhs)  => 단순 대입 연산자

	  특히 이 중에서도 덧셈 연산자 그리고 단순 대입 연산자에서는 인스턴스를 인스턴스로 만드는 과정에서 이동 생성자가 호출된다.
	  특히나 덧셈 연산자의 경우에는 CMyData 형식을 반환하기 때문에 이동 생성자의 호출이 더욱 중요하다는 것을 고려해야 한다.

*/

// <예제.연산자 다중 정의와 이동 생성자 호출 시점>

#include <iostream>
using namespace std;

class CMyData
{
public:
	// 변환 생성자
	CMyData(int nParam)
		: m_nData(nParam)
	{
		cout << "CMyData(int)" << endl;
	}

	// 복사 생성자
	CMyData(const CMyData& rhs)
		: m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &)" << endl;
	}
	
	// 이동 생성자
	CMyData(const CMyData&& rhs) noexcept
		: m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &&)" << endl;
	}

	// 형변환
	operator int()
	{
		return m_nData;
	}

	// + 연산자
	CMyData operator+(const CMyData& rhs)
	{
		cout << "operator+" << endl;
		CMyData result(0);
		result.m_nData = this->m_nData + rhs.m_nData;

		return result;
	}

	// =
	CMyData& operator= (const CMyData& rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData;

		return *this;
	}

private:
	int m_nData = 0;
};

int main()
{
	cout << "**** Begin ****" << endl;
	CMyData a(0), b(3), c(4);

	// b + c 연산을 실행하면 이름 없는 임시 객체가 만들어지며
	// a에 대입하는 것은 이 임시 객체다.
	a = b + c;



	cout << a << endl;

	cout << "**** End ****" << endl;

	return 0;
}

/*
	a = b + c; 코드의 작동 방식은 아래 코드와 동일하다.

	a = b.operator+(c);
	a.operator=(b.operator+(c));

	더욱 자세히 순서를 뜯어보면 다음과 같다.
	
	먼저 b + c를 처리한다.

	1. operator+ 호출

	2. 결과를 저장하기 위한 임시객체 생성, 이에 대한 CMyData(int) 호출

	3. CMyData(const CMyData &&)가 실행되며 c에 대한 참조를 전달하여 실질적인 연산 진행

	a에 결과값을 넘겨준다.

	1. operator= 호출

*/