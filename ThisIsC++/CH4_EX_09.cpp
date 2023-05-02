/*
	���� ������
	
	�ܼ� ���� �����ڴ� ������ ���� ���� ���� �׿� ����ִ� �������̴�.
	�� �ܼ� ���� �����ڴ� �Ϲ� ������ �Ӹ� �ƴ϶� ����ü�� Ŭ�������� �⺻������ ����ȴ�.
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

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;

		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}

	~CMyData()
	{
		delete m_pnData;
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
	CMyData a(10);
	CMyData b(20);

	// �ܼ� ������ �õ��ϸ� ��� ����� ���� �״�� �����Ѵ�.
	// ��, ���� ���簡 ����ǹǷ� �̴�� �ڵ带 �����ϸ� ������ �߻��Ѵ�.
	// �̸� �ذ��ϱ� ���ؼ��� C++���� �����ϴ� ������ ���� ���Ǹ� �̿��ؼ� ���� ���� ���簡 ������ ���� �����ڸ� �������־�� �Ѵ�.
	a = b;
	cout << a.GetData() << endl;

	return 0;
}
