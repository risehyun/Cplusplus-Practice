/*
	�����Ͱ� ���� ���� ������ ���
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() 
	{
		cout << "CMyData()" << endl; 
	}

	int GetData(void) const
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


int main()
{
	// ����Ʈ �����ڰ� ȣ��Ǵ� ���
	CMyData a;
	a.SetData(10);

	// ���� �����ڰ� ȣ��Ǵ� ��� => �����͸� ����ϴ� ���� �������� ����� ���ǰ� �����Ƿ�, 
	// �Լ� ���·� ȣ��� �����ڴ� �ƹ��� ���� ���� ����Ǿ� a�� �ִ� 10�̶�� ���� �����ϰ� ������ �ȴ�.
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}