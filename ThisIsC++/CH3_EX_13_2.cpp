/*
	new와 delete 연산자 사용 => 배열을 이용하는 경우

	배열로 생성한 객체들은 반드시 배열로 삭제 해야 한다.
	그렇지 않으면 메모리 릭(Leak) 버그가 발생하게 된다. 
*/

#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

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
	cout << "Begin" << endl;

	// 배열로 new 연산자를 수행할 수 있다.
	CTest  *pData = new CTest[3];

	// delete 연산자를 이용해 객체를 삭제한다.
	// 이 예제에서는 배열로 생성했으므로 반드시 삭제도 배열로 해야 한다.
	// 그렇지 않고 하나만 삭제하는 경우 (delete pData) 메모리 누수(릭, Leak) 문제가 발생하기 때문이다.
	delete[] pData;
	cout << "End" << endl;

	return 0;
}