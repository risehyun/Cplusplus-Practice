/*
	<���� - �̵� ���� ������>

	���꿡 ���� �ӽ� ����� �� ������ �ִ�.

	1. a + b�� ���� ���꿡 ���� �ӽ� ���
	2. �Լ� ȣ�⿡ ���� �ӽ� ���

	2���� ���� ��� TestFunc()�� ���� �Լ��� int �ڷ����� ��ȯ�Ѵٸ�
	ȣ���� �Լ����� �� ��ȯ���� ������ ����ϰ� ������� �ʰ� 
	������� ��ȣ���� �Լ��� �ϴ� int�ڷ��� ���� ȣ���ڿ��� ���޵ǰ� �ȴ�.

	�̷��� �ӽ� ��ü ������ �̵� �����ڰ� ���ܳ���, 
	���� �ӽ� ��ü ������ ���� �����ڿ� ������ �̵� ���� �����ڵ� ���ܳ���.
*/

#include <iostream>
using namespace std;

// ������ �ڵ�
class CMyData
{
public:
	explicit CMyData(int nParam)
	{
		cout << "CMyData(int)" << endl;
		m_pnData = new int(nParam);
	}

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;
		m_pnData = new int(*rhs.m_pnData);
	}

	~CMyData() 
	{ 
		delete m_pnData; 
	}

	operator int() 
	{
		return *m_pnData;
	}

	// ���� ������ ���� ����
	CMyData operator+(const CMyData& rhs)
	{
		// ȣ���� �Լ������� �̸� ���� �ӽ� ��ü�� �����ȴ�.
		return CMyData(*m_pnData + *rhs.m_pnData);
	}

	// �ܼ� ���� �������� ���� ����
	CMyData& operator=(const CMyData& rhs)
	{
		cout << "operator=" << endl;

		// ���� ���� �����Ϸ��� ����� �ڱ� �ڽŰ� ���ٸ� 
		// ������ �����ϴ� �ǹ̰� �����Ƿ� 
		// �ƹ��͵� ���� �ʰ� �ڱ� �ڽ��� ��ȯ�ϸ� �Լ��� �����Ų��.
		if (this == &rhs)
		{
			return *this;
		}

		// �����ϱ� ���� ������ �����ϴ� ���� �������־� �� ������ ����� ����.
		delete m_pnData;
		m_pnData = new int(*rhs.m_pnData);

		return *this;
	}

	// �̵� ���� ������ ���� ����
	CMyData& operator=(CMyData&& rhs)
	{
		cout << "operator=(Move)" << endl;
		if (this == &rhs)
		{
			return *this;
		}

		// ���� ���縦 �����ϰ� ������ NULL�� �ʱ�ȭ�Ѵ�.
		m_pnData = rhs.m_pnData;
		rhs.m_pnData = nullptr;

		return *this;
	}

private:
	int* m_pnData = nullptr;
};

// ����� �ڵ�
int main()
{
	CMyData a(0), b(3), c(4);
	cout << "***** Before *****" << endl;

	// �̵� ���� �����ڰ� ����ȴ�.
	a = b + c;

	cout << "***** After *****" << endl;
	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}

/*
	a = b + c���� b�� c�� ���ϸ� CMyData::operator+() �Լ��� ȣ��ȴ�. �׸��� �� �λ깰�� (b+c)�� ���� ����� �ӽ� ��ü�� ź���Ѵ�.
	�� �ӽ� ��ü�� r-value ��� ��ٷ� �ܼ� ���� ������ �����Ѵٸ� �̶��� �̵� ���� �����ڰ� ȣ��ȴ�.
	�̵� ���� �����ڸ� ���� �������� �ʴ´ٸ� �Ϲ� ���� ������ �Լ��� ȣ��� ���̰�, 
	�̵� ���� �����ڸ� ���� �����ߴٸ� �����Ϸ��� ���ǵ� �̵� ���� �����ڸ� ȣ������ ���̴�.

	�̵� �����ڿ� ���������� �̵� ���� �����ڵ� �� ����� �ӽ� ��ü�� �������� ������ �ִ�.
	(const CMyData &rhs)�� �Ű������� ����ϴ� �Ϲ� ���� ������ �Լ��� '���� ����'�� ����������,
	(const CMyData &&rhs)�� ����ϴ� �̵� ���� �����ڴ� '���� ����'�� �����Ѵ�.
	�̴� ��ġ �˸��̸� �� ������ �Ͱ� ����.

	���� �н��ߵ��� �̵� �ø�ƽ�� �̵� �����ڿ� �̵� ���� �����ڷ� �����ȴ�. �� �� ������ ��� �� ����� �ӽ� ��ü�� ���õ� ���ε�,
	���� ��� ���ǿ��� ȣ��Ǵ��� ��Ȯ�� �˰� ����ϴ� ���� ���� �߿��ϴ�.
*/