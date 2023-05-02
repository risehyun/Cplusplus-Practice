/*
	4.1.1 �Լ� ȣ��� ���� ������
	
	<�Ű������� ���Ǵ� ���� ������>
*/

#include <iostream>
using namespace std;

class CTestData
{
public:

	// ������ int �� ���� �޴� ������ ����
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	// ������ CTestData Ŭ������ ���۷����� �޴� ������ ���� 
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	// const�� �ٿ� �б� �������� ���� ����� �޼���
	int GetData() const 
	{ 
		return m_nData; 
	}

	// ��� ������ ���⸦ �õ��ϴ� �޼���
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	int m_nData = 0;

};

// �Ű������� CTestData Ŭ���� ����(�� ��)�̹Ƿ� ȣ��� ������ �ƴ� ���纻�� �����ȴ�. (=���� �����ڰ� ȣ��ȴ�.)
void TestFunc(CTestData param)
{
	cout << "Test()" << endl;

	// ��ȣ���� �Լ����� �Ű����� �ν��Ͻ��� ���� �����Ѵ�.
	param.SetData(20);
}

int main(int argc, char* argv[])
{
	cout << "****Begin****" << endl;
	CTestData a(10);	// int �ϳ��� ���ڷ� ������ Ŭ������ �����.
	TestFunc(a);		// �� a�� int a�� �ƴ� �ּ� a�̴�. �̸� ���ڷ� �ѱ� �� ���� Ÿ���� &�� �ƴ� �����̹Ƿ�,
						// a�� �������� �ΰ� ���ο� Ŭ������ �����Ѵ�. ���� �������� CTestData ��ü�� �� ���� �ȴ�. 
						// ������ �Լ� ���ο��� ���ڷ� ���� �ּ� ���� int ���� 20���� �Ҵ������� ������ ���� a(10)�� ����� ������ ��ġ�� �ʴ´�.

	// �Լ� ȣ�� �� a�� ���� ����غ���.
	cout << "a: " << a.GetData() << endl;

	cout << "****End****" << endl;


	return 0;
}

/*
	<�� ������ ���� ���� �� �ִ� ���>

	�� ��ü�� �� �� �ִ� ���� �ݵ�� �ϳ��� ������ �Ѵ�.

*/