/*
	��� �Լ� ����� ���Ǹ� �и�

	Ŭ���� ���� ���ο��� �Լ� ������ �ΰ�, ������ ��ü�� Ŭ���� ���� �ܺο� ������ �����Ѵ�.
*/

#include <iostream>
using namespace std;

// ������ �ڵ�
class CTest
{
public:
	// CTest Ŭ������ '������ �Լ�' ���� �� ����
	CTest()
	{
		// �ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�'���� �ʱ�ȭ�Ѵ�.
		m_nData = 10;
	}
	
	// ��� ������ ����
	int m_nData;

	// ��� �Լ� ����. ���Ǵ� �и��ߴ�!
	void PrintData(void);
};

// Ŭ���� ������ �ܺο��� �и��� ��� �Լ� ����
void CTest::PrintData(void)
{
	// ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
	cout << m_nData << endl;
}

// ����� �ڵ�
int main()
{
	CTest t;	   // m_nData�� 10�� �Ҵ�ȴ�.
	t.PrintData(); // 10�� ��µȴ�.

	return 0;
}