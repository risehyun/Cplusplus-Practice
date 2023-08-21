/*
	<예제 - 이동 대입 연산자>

	연산에 의한 임시 결과는 두 종류가 있다.

	1. a + b와 같은 연산에 의한 임시 결과
	2. 함수 호출에 의한 임시 결과

	2번의 예를 들면 TestFunc()와 같은 함수가 int 자료형을 반환한다면
	호출자 함수에서 그 반환값을 실제로 사용하건 사용하지 않건 
	상관없이 피호출자 함수는 일단 int자료형 값을 호출자에게 전달되게 된다.

	이러한 임시 객체 때문에 이동 생성자가 생겨나며, 
	또한 임시 객체 때문에 대입 연산자와 별개로 이동 대입 연산자도 생겨났다.
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CMyData
{
public:
	explicit CMyData(int nParam)
	{
		cout << "CMyData(int)" << endl;
		m_pnData = new int(nParam);
	}

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;
		m_pnData = new int(*rhs.m_pnData);
	}

	~CMyData() 
	{ 
		delete m_pnData; 
	}

	operator int() 
	{
		return *m_pnData;
	}

	// 덧셈 연산자 다중 정의
	CMyData operator+(const CMyData& rhs)
	{
		// 호출자 함수에서는 이름 없는 임시 객체가 생성된다.
		return CMyData(*m_pnData + *rhs.m_pnData);
	}

	// 단순 대입 연산자의 다중 정의
	CMyData& operator=(const CMyData& rhs)
	{
		cout << "operator=" << endl;

		// 만약 현재 대입하려는 대상이 자기 자신과 같다면 
		// 대입을 수행하는 의미가 없으므로 
		// 아무것도 하지 않고 자기 자신을 반환하며 함수를 종료시킨다.
		if (this == &rhs)
		{
			return *this;
		}

		// 대입하기 전에 기존에 존재하던 값을 삭제해주어 빈 공간을 만들어 낸다.
		delete m_pnData;
		m_pnData = new int(*rhs.m_pnData);

		return *this;
	}

	// 이동 대입 연산자 다중 정의
	CMyData& operator=(CMyData&& rhs)
	{
		cout << "operator=(Move)" << endl;
		if (this == &rhs)
		{
			return *this;
		}

		// 얕은 복사를 진행하고 원본은 NULL로 초기화한다.
		m_pnData = rhs.m_pnData;
		rhs.m_pnData = nullptr;

		return *this;
	}

private:
	int* m_pnData = nullptr;
};

// 사용자 코드
int main()
{
	CMyData a(0), b(3), c(4);
	cout << "***** Before *****" << endl;

	// 이동 대입 연산자가 실행된다.
	a = b + c;

	cout << "***** After *****" << endl;
	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}

/*
	a = b + c에서 b와 c를 더하면 CMyData::operator+() 함수가 호출된다. 그리고 그 부산물로 (b+c)에 대한 결과가 임시 객체로 탄생한다.
	이 임시 객체를 r-value 삼아 곧바로 단순 대입 연산을 실행한다면 이때는 이동 대입 연산자가 호출된다.
	이동 대입 연산자를 다중 정의하지 않는다면 일반 대입 연산자 함수가 호출될 것이고, 
	이동 대입 연산자를 다중 정의했다면 컴파일러가 정의된 이동 대입 연산자를 호출해줄 것이다.

	이동 생성자와 마찬가지로 이동 대입 연산자도 곧 사라질 임시 객체와 직접적인 관련이 있다.
	(const CMyData &rhs)를 매개변수로 사용하는 일반 대입 연산자 함수는 '깊은 복사'를 수행하지만,
	(const CMyData &&rhs)를 사용하는 이동 대입 연산자는 '얕은 복사'를 수행한다.
	이는 마치 알맹이만 쏙 빼내는 것과 같다.

	전에 학습했듯이 이동 시맨틱은 이동 생성자와 이동 대입 연산자로 구현된다. 이 두 가지는 모두 곧 사라질 임시 객체와 관련된 것인데,
	언제 어느 조건에서 호출되는지 정확히 알고 사용하는 것이 가장 중요하다.
*/