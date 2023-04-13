/*
	생성자와 소멸자
*/

#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}

};

int main()
{
	cout << "Begin" << endl;	// Begin이 출력된다.
	CTest a;					// CTest::CTest()가 출력된다.

	cout << "End" << endl;		// End가 출력된다.
								// 스코프가 닫히면서 지역 변수가 소멸된다. 따라서 ~CTest::CTest()가 출력된다.
}