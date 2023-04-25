/*
	��� �Լ� ���� ���� 1

	���ʿ� ��� ������ int �� �ϳ��� ������ �ֱ� ������ �� Ŭ������ int�� ���ڷ� �������� �ǵ��� ������ �ִ�.
	�׷��� ����ڰ� �Ǽ��� ���ڷ� �ѱ���� �õ��� �� �� �ֱ� ������, �ƿ� double Ÿ������ ��� �Լ��� ���� �����ؼ�
	�߸��ؼ� �Ǽ��� ���ڷ� �־������ �� �װ� 0���� ó���ع����� ����� ����ߴ�.
	������ �� ��� ���� ó���� ������ �ڵ尡 �˾Ƽ� ���ֱ� ������ ������ ������ �߻����� �ʾ� ����ڰ� �� ������ ������ �������� ���� ���� �ִ�.
*/ 


#include <iostream>
using namespace std;


// ������ �ڵ�
class CMyData
{
public:
	CMyData()
		: m_nData(0)
	{

	};

	int GetData(void)
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

	// �Ű������� double �ڷ����� ���� ���� �����ߴ�.
	void SetData(double dParam)
	{
		m_nData = 0;
	}

private:
	int m_nData;
};

int main()
{
	CMyData a;

	// CMyData::SetData(int) �޼��尡 ȣ��ȴ�.

	a.SetData(10);

	cout << a.GetData() << endl;

	CMyData b;

	// CMyData::SetData(double) �޼��尡 ȣ��ȴ�.

	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}