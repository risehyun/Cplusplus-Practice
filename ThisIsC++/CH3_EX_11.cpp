/*
	�����ڿ� �Ҹ���
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
	cout << "Begin" << endl;	// Begin�� ��µȴ�.
	CTest a;					// CTest::CTest()�� ��µȴ�.

	cout << "End" << endl;		// End�� ��µȴ�.
								// �������� �����鼭 ���� ������ �Ҹ�ȴ�. ���� ~CTest::CTest()�� ��µȴ�.
}