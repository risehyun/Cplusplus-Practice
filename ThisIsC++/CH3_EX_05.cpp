/*
	멤버 변수 초기화를 위한 생성자 함수 사용
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CTest
{
public:
	// CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest()
	{
		// 인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화한다.
		m_nData = 10;
	}

	// 멤버 변수 선언
	int m_nData;

	// 멤버 함수 선언 및 정의
	void PrintData(void)
	{
		// 멤버 데이터에 접근하고 값을 출력한다.
		cout << m_nData << endl;
	}
};

// 사용자 코드
int main()
{
	CTest t;
	t.PrintData();

	return 0;
}