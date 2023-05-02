/*
	4.2.2 ���Ǵ� ��ȯ
*/

#include <iostream>
using namespace std;

// ������ �ڵ�
class CTestData
{
public:
	explicit CTestData(int nParam) : m_nData(nParam)
	{
		
	}

	// CTestData Ŭ������ int �ڷ������� ��ȯ�� �� �ִ�!
	operator int(void) 
	{ 
		return m_nData; 
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

};

// ����� �ڵ�
int main(int argc, char* argv[])
{
	CTestData a(10);
	cout << a.GetData() << endl;

	// ���� �Ʒ� �ڵ�� ������� �ʴ� ���� ���������� operator int(void) �� ������ �����߱� ������ CTestData ���Ŀ��� int �ڷ������� ��ȯ�� �� �ְ� �Ǿ���.
	// ������ ���� �����ڰ� exlicit��� ������ ����ȯ�� �Ұ��������� ������ �Ʒ��� �ڵ带 ����� �� ���� �Ǹ�, ��� static_cast �����ڸ� ����� ��������� ����ȯ�� �ؾ� �Ѵ�.
	cout << a << endl;

	// �Ʒ� �ڵ�ó�� ()�� ���� ĳ������ �ϴ� ���� �������� C��Ÿ���̸� C++������ ������� �ʴ´�. ��� static_cast�� ����ؾ� �Ѵ�.
	cout << (int)a << endl;

	// C++���� ����ؾ� �ϴ� ĳ���� ����̸�, ������ ����ȯ �����ڸ� �������� ������ ������ ������ ��ȯ������ �ʴ� �ٴ� ������ C��Ÿ���� ���� ����ȯ �������� ()�� �ٸ���.
	// ���� �� ����� ����ϸ� ����ȯ �ص� �Ǵ� �͵�� ������ �� �ְ�, ����� ���������� �ټ� ������ �� ������ �ٺ����� �Ǽ��� �����ϴµ� ū ������ �ȴ�.
	cout << static_cast<int>(a) << endl;

	return 0;
}

/*
	������ ����ȯ�� ����ϸ� ����� ���忡���� ��������.
	���� �� explicit ������ ����ȭ �� �ʿ�� ������, ��� ���δ� �����ڰ� �Ǵ��ؾ� �Ѵ�.
*/