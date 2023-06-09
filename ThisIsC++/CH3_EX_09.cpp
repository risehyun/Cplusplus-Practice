/*
	C++ 11의 멤버 변수 초기화

	생성자에 일일이 값을 기술하는 생성자 초기화 목록을 작성하는 것이 귀찮다면 C++ 11 스타일로 멤버 변수를 초기화하면 된다.
	이 문법은 생성자를 이용하지 않고 멤버 변수를 초기화할 수 있으므로 매우 편리하며 직관적이다.
	하지만 몇몇 주의할 것들이 있다는 점도 기억해두어야 한다.
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CTest
{
public:
	// 생성자 초기화 목록을 이용한 멤버 초기화
	CTest()
	{}

	// C++11부터 선언과 동시에 멤버 변수를 초기화할 수 있다!
	int m_nData1 = 10;
	int m_nData2 = 20;

	void PrintData(void)
	{
		cout << m_nData1 << endl; // 10이 출력된다.
		cout << m_nData2 << endl; // 20이 출력된다.
	}
};

// 사용자 코드
int main()
{
	CTest t;
	t.PrintData();

	return 0;
}

/*
	변수를 적절히 초기화하는 일은 매우 중요하다.
	그것을 사용자에게 맡겨도 좋지만, 이 경우 사용자가 별도로 값을 지정하지 않는다면
	제작자가 적절한 값을 작성할 수 있게 해주어야 버그를 차단할 수 있다.
	이렇게 하면 사용자는 매우 편리하게 객체를 이용할 수 있게 된다.
*/