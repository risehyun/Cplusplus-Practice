/*
	�����Ͱ� �������� ���� ���� ����
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}

	int GetData()
	{
		if (m_pnData != NULL)
		{
			return *m_pnData;
		}

		return 0;
	}

private:
	int* m_pnData = nullptr;
};

int main()
{
	// 10�� int* ���� ������ a�� �����Ѵ�.
	CMyData a(10);

	// a�� ���������ϸ鼭 a�� int* �� ������ b�� �����Ѵ�.
	CMyData b(a);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}

/*
	�� ������ �׳� ���� ���������� �۵��ϴ� ��ó�� ��������, 
	b�� ���� ����� �����Ǿ��� ������ �޸𸮸� �����ϴ� ��� �ɰ��� ������ �߻��ϰ� �ȴ�.

	�̴� ���� ���縦 ������ ������ ���� �����ڰ� ���� ������ �����Ϸ��� ����� ���� ���� �����ڰ� �ڵ����� �۵��ϸ鼭 ���� ������.
	�����Ϸ��� ���� ���� �����ڴ� ������ ���� ����� ���̴�.

	CMyData(const CMyData &rhs)
	{
		m_pnData = rhs.m_pnData;
	}

	�̸� �ذ��ϱ� ���� ���� �����ڸ� �־� ���� ���縦 �����ϵ��� ������ �ذ��ϴ� ����� ���� �������� ����.

*/