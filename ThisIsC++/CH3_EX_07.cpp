/*
	멤버 함수 선언과 정의를 분리

	클래스 선언 내부에는 함수 원형만 두고, 나머지 몸체는 클래스 선언 외부에 별도로 정의한다.
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
		// 인스턴스가 생성되면 멤버 데이터를 '자동'으로 초기화한다.
		m_nData = 10;
	}
	
	// 멤버 데이터 선언
	int m_nData;

	// 멤버 함수 선언. 정의는 분리했다!
	void PrintData(void);
};

// 클래스 스코프 외부에서 분리된 멤버 함수 정의
void CTest::PrintData(void)
{
	// 멤버 데이터에 접근하고 값을 출력한다.
	cout << m_nData << endl;
}

// 사용자 코드
int main()
{
	CTest t;	   // m_nData에 10이 할당된다.
	t.PrintData(); // 10이 출력된다.

	return 0;
}