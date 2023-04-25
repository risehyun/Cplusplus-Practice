/*
	delete ���� ����� ������ ���� �߻�

	C++ 11 ��Ÿ���� ó�� �������, delete ���� �����Ͽ� ��������� �޼��带 ������ ������ ������ �߻���Ų��.
	�̸� ���� ����ڰ� �߸��� ���ڰ��� �Ѱ��� �� �߻��ϴ� ������ �ƿ� �����Ѵ�.
	����� ��Ƽ� �۵��ϴ� �ڵ�� �� �ɰ��� ������ �����.
	���� ��ó�� Ȯ���ϰ� ����ó���ϴ� ���� �� �ٶ����ϴ�.
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

	// ����� double �ڷ��� ���μ��� �Ѿ���� ��츦 �ƿ� �����Ѵ�.
	void SetData(double dParam) = delete;

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

	// CMyData::SetData(double) �޼���� ȣ�� �� �� ����. �Ǽ��� �Ѿ�� ��츦 �ƿ� �����߱� �����̴�.
	//	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}
