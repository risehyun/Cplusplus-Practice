/*
	디폴트 생성자의 생략
*/

#include <iostream>

using namespace std;

class CTest 
{
	int m_nData;

public:
	// 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다.
	CTest(int nParam)
		: m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		// 생성할 때 매개변수로 받은 값을 출력한다.
		cout << "~CTest::CTest() " << m_nData << endl;
	}
};

int main()
{
	cout << "Begin" << endl;	// Begin이 출력된다.
	CTest a(1);					// CTest::CTest()이 출력된다.
	cout << "Before b" << endl; // Before b가 출력된다.
	CTest b(2);					// CTest::CTest()이 출력된다.
	cout << "End" << endl;		// End가 출력된다.
								// ** ~CTest::CTest() 2이 출력된다. 
								// (지역 변수는 스택 메모리 영역을 사용하므로 가장 나중에 들어간 것이 가장 먼저 나와서 삭제된다.)
								// ** ~CTest::CTest() 1이 출력된다.
	return 0;
}