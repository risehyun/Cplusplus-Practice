/*
	���� �����ڸ� �����Ͽ� ���� ���縦 ������ ���� ���翡�� �Ͼ�� ������ �ذ��ϴ� ���
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

	// ���� ������ ���� �� ����
	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;

		// ���� �޸𸮸� �Ҵ��Ѵ�.
		m_pnData = new int;

		// �����Ͱ� ����Ű�� ��ġ�� ���� �����Ѵ�.
		// �̶� �ܼ��� ������ ������ �ּҸ� ���� ������ ����� ���� �ƴ϶�, 
		// �����Ͱ� ����Ű�� ��� �޸𸮿� ����� ���� ������ �ٽ� �����Ͱ� ����Ű�� ��� �޸𸮷� �����Ѵ�.
		// �̷ν� ���� ������ �޸𸮸� ������ ������ ��� �� �ʿ��� ��ü�� delete�ϴ��� ���� ���ʿ� ������ ��ġ�� �ʴ´�.
		*m_pnData = *rhs.m_pnData;
	}

	// ��ü�� �Ҹ��ϸ� ���� �Ҵ��� �޸𸮸� �����Ѵ�.
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
	// ������ ��� ������
	int* m_pnData = nullptr;
};

int main()
{
	CMyData a(10);

	CMyData b(a);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}
