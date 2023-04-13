/*
	����Ʈ �������� ����
*/

#include <iostream>

using namespace std;

class CTest 
{
	int m_nData;

public:
	// �������� �Ű������� ���޵� ������ ��� ������ �ʱ�ȭ�Ѵ�.
	CTest(int nParam)
		: m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		// ������ �� �Ű������� ���� ���� ����Ѵ�.
		cout << "~CTest::CTest() " << m_nData << endl;
	}
};

int main()
{
	cout << "Begin" << endl;	// Begin�� ��µȴ�.
	CTest a(1);					// CTest::CTest()�� ��µȴ�.
	cout << "Before b" << endl; // Before b�� ��µȴ�.
	CTest b(2);					// CTest::CTest()�� ��µȴ�.
	cout << "End" << endl;		// End�� ��µȴ�.
								// ** ~CTest::CTest() 2�� ��µȴ�. 
								// (���� ������ ���� �޸� ������ ����ϹǷ� ���� ���߿� �� ���� ���� ���� ���ͼ� �����ȴ�.)
								// ** ~CTest::CTest() 1�� ��µȴ�.
	return 0;
}