/*
	�̸� ���� �ӽ� ��ü�� ������ �Ҹ�
*/

#include <iostream>

using namespace std;

// ������ �ڵ�
class CTestData
{
public:
	CTestData(int nParam, char* pszName) 
		: m_nData(nParam), 
		m_pszName(pszName)
	{
		cout << "CTestData(int): " << m_pszName << endl;
	}

	~CTestData()
	{
		cout << "~CTestData(): " << m_pszName << endl;
	}

	CTestData(const CTestData &rhs) 
		: m_nData(rhs.m_nData),
		m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData &): " << m_pszName << endl;
	}

	CTestData& operator=(const CTestData& rhs)
	{
		cout << "operator=" << endl;

		// ���� ���������� �̸�(m_pszName)�� �״�� �д�.
		m_nData = rhs.m_nData;

		return *this;
	}

	int GetData() const
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}


private:
	int m_nData = 0;

	// ��� ������ �����ϱ� ���� ���
	char *m_pszName = nullptr;
};

// CTestData ��ü�� ��ȯ�ϴ� �Լ��̴�.
CTestData TestFunc(int nParam)
{
	// CTestData Ŭ���� �ν��Ͻ��� a�� ���� �����̴�.
	// ���� �Լ��� ��ȯ�Ǹ� �Ҹ�ȴ�.
	CTestData a(nParam, "a");

	return a;
}

int main()
{
	CTestData b(5, "b");
	cout << "*****Before*****" << endl;

	// �Լ��� ��ȯ�Ǹ鼭 �ӽ� ��ü�� �����ƴٰ� ���� ���� �� ��� �Ҹ��Ѵ�!
	b = TestFunc(10);

	cout << "*****After*****" << endl;
	cout << b.GetData() << endl;

	return 0;
}

/*
	�� ���������� �Լ��� ��ȯ�� Ŭ���� �ν��Ͻ��� ���� Ȱ������ �ʾ������� �ұ��ϰ� �ӽ� ��ü�� �ڵ����� �����°� �Ҹ��Ѵ�.
	������ �� �ν��Ͻ��� ������� �ʱ� ������ �׷� ������ �� ������ �ƹ��͵� ����.
	�̷� ��쿡�� Release���� �������ϸ� �̸� ���� �ӽð�ü�� �ƿ� �������� �ʴ´�.

	������ �̷��� '�̸� ���� ��ü'�� '����'�� �ο��ϸ� ��Ȳ�� �޶�����.
	���� ������ ������ �� '����'(&�� r-value�� �δ� ���)�̶�� ǥ���� ��� ���� �ִµ�,
	�Ʒ� �ڵ� ó�� �����ϸ� ������ ������ ������ �����ϴ� ��찡 �ȴ�.

	CTestData &rData = TestFunc(10);

	�� ��쿡�� ������ �ӽ� ��ü�� ���� �� �Ҵ� �Ϸ�� �ٷ� ���� �Ǵ� �Ͱ� �޸� ������ �����ϹǷ�
	���� �ֱⰡ �þ �Ҹ� ������ main() �Լ��� ������ �������� �ٲ��.

	'����'�� ����ٴ� ���� '�̸�'�� ������ ���� ����ٴ� ���̰�, '�̸�' �̶� '�ĺ���'�̹Ƿ�,
	�ĺ��ڰ� ���ܳ� ��ŭ ���� �ڵ忡���� �ӽ� ��ü�� �����ؼ� ������ �� �ְ� �ȴ�.

	�̸� ���� �ӽ� ��ü�� �ٷ� �� ���� �߿��� ���� 
	ù��°�� �� ���縦 �ǽ��ϴ� ���̰�
	�ι�°�� ���� �� �Ҹ� �ñ⸦ ��Ȯ�ϰ� �ν��ϴ� ���̴�.

	Ư�� �Ҹ� �ñ⸦ �ν��ϴ� ���� ���� �߿��ϴ�.
*/