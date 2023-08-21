/*
	5.3 대입 연산자
	
	이전에 깊은 복사를 배울 때 단순 대입 연산자를 경험한 적이 있다.
	그러므로 이번에는 사용자의 편의 외에 왜 대입 연산자를 다중 정의해야 하는지는 생략하고,
	그 외의 것들을 학습해본다.

	<예제 - 대입 연산자 다중 정의>
	<예제 - += 연산자 함수 추가>
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CMyData
{
public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);

		/*
			위 코드는 아래 두 줄과 같다.
			m_pnData = new int;
			*m_pnData = *rhs.m_pnData;
		*/
	}

	~CMyData()
	{
		delete m_pnData;
	}

	operator int()
	{
		return *m_pnData;
	}

	// 단순 대입 연산자 다중 정의
	// #2. a = b = c;와 같은 연산을 가능하게 하기 위해서 반환형은 클래스의 참조자가 된다.
	CMyData& operator=(const CMyData& rhs)
	{
		// #1. r-value가 자신이면 대입을 수행하지 않고 함수를 끝내버린다.
		if (this == &rhs)
		{
			// 반환 타입이 참조형이므로 자기 자신의 포인터를 넘겨준다.
			return *this;
		}

		// 본래 가리키던 메모리를 삭제하고
		delete m_pnData;

		// 새로 할당한 메모리에 값을 저장한다.
		m_pnData = new int(*rhs.m_pnData);

		// 반환 타입이 참조형이므로 자기 자신의 포인터를 넘겨준다.
		return *this;
	}

	CMyData& operator+=(const CMyData& rhs)
	{
		// 현재 값을 처리한다.
		int* pnNewData = new int(*m_pnData);

		// 누적할 값을 처리한다.
		*pnNewData += *rhs.m_pnData;

		// 기존 데이터를 삭제한다.
		delete m_pnData;

		// 삭제된 메모리를 새 메모리로 대체한다.
		m_pnData = pnNewData;

		return *this;
	}

private:
	// #3. 아래 멤버 변수는 NULL이 아닌 nullptr로 초기화했다.
	// nullptr은 c++11 에서 새로 등장한 예약어로, 이름 그대로 NULL 포인터를 의미한다.
	// 이는 기존에 존재하던 NULL을 대체하기 위해서 사용하는데, NULL은 엄밀히 말해 int자료형 0과 같다고 볼 수 있다.
	// 그러나 nullptr은 같은 0이라 하더라도 그것은 단지 값일 뿐 명백히 '포인터' 라는 의미를 포함하고 있다.
	// 그러므로 앞으로 포인터를 초기화 할 때는 nullptr을 사용하는 것이 좋다.
	int* m_pnData = nullptr;
};

// 사용자 코드
int main()
{
	CMyData a(0), b(5), c(10);
	a += b; 
	a += c;
	cout << a << endl;

	/*
		#1. 
		만약 위의 코드를 a = a; 로 변경하게 되면 쓰레기 값이 출력된다.
		자기 자신에 자신을 다시 대입하는 것은 정상적인 코드라고 하기엔 어렵지만 그렇다고 문법적으로 문제가 되는 것은 아니다.
		그렇기 때문에 이 경우에도 정상적으로 작동하도록 만들어야 한다.

		현재 코드에서는 operator=() 에서 데이터를 복사하기도 전에 원본을 삭제하는 delete를 하고 있기 때문에
		쓰레기 값이 출력되는데, 보통 단순 대입 연산자 내부에서는 내가 나 자신에게 단순 대입 연산을 실행하는 경우가
		있을 때 아무런 처리를 하지 않는 방법으로 대응한다.

		#2. 
		대입 연산자의 반환값이 void인 경우, a = b = c와 같은 연산이 불가하다.
		void는 l-value의 형식으로 취할 수 없을 뿐만 아니라 존재하지도 않는 것을 대입한다는 것은 있을 수 없는 일이기 때문이다.
		따라서 일반적으로 대입 연산자 함수의 반환 형식은 참조자로 설정해서 문제를 해결한다.

	*/

	return 0;
}