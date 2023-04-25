/*
	다른 생성자를 추가로 부르는 생성자 초기화 함수

	생성자가 다중 정의될 경우 사용자는 편리하겠지만 제작자는 동일한 멤버를 여러번 초기화하는 코드를 기술해야 하는 어려움이 있다.
	이를 해결하기 위해 C++ 11부터 지원되는 생성자 위임을 사용할 수도 있다.
	생성자 위임을 사용하면 생성자 초기화 목록에서 다른 생성자를 추가로 부를 수 있다.
*/

#include <iostream>
using namespace std;

class CMyPoint
{
public:
	CMyPoint(int x)
	{
		cout << "CMyPoint(int)" << endl;

		// x값이 100이 넘는지 검사하고, 넘으면 100으로 맞춘다.
		if (x > 100)
			x = 100;

		m_x = 100;
	}

	CMyPoint(int x, int y)
		// x 값을 검사하는 코드는 이미 존재하므로 생성자 위임을 사용해 재활용할 수 있다.
		: CMyPoint(x)
	{
		cout << "CMyPoint(int, int)" << endl;

		// y 값이 200이 넘는지 검사하고, 넘으면 200으로 맞춘다.

		if (y > 200)
		{
			y = 200;
		}

		m_y = 200;
	}

	void Print()
	{
			cout << "X:" << m_x << endl;
			cout << "Y:" << m_y << endl;
		
	}

private:
	int m_x = 0;
	int m_y = 0;
};

int main(int argc, char* argv[])
{
	// 매개변수가 하나인 생성자만 호출한다.
	CMyPoint ptBegin(110);
	ptBegin.Print();

	// 이번에는 두 생성자 모두 호출한다.
	CMyPoint ptEnd(50, 250);
	ptEnd.Print();

	return 0;
}