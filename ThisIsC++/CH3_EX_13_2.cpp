/*
	new�� delete ������ ��� => �迭�� �̿��ϴ� ���

	�迭�� ������ ��ü���� �ݵ�� �迭�� ���� �ؾ� �Ѵ�.
	�׷��� ������ �޸� ��(Leak) ���װ� �߻��ϰ� �ȴ�. 
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

	// �迭�� new �����ڸ� ������ �� �ִ�.
	CTest  *pData = new CTest[3];

	// delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	// �� ���������� �迭�� ���������Ƿ� �ݵ�� ������ �迭�� �ؾ� �Ѵ�.
	// �׷��� �ʰ� �ϳ��� �����ϴ� ��� (delete pData) �޸� ����(��, Leak) ������ �߻��ϱ� �����̴�.
	delete[] pData;
	cout << "End" << endl;

	return 0;
}