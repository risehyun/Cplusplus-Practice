/*
	mutable �����

	mutable ������ C++ ���� ����ȯ �������� const_cast<>�� ���ȭ�� ��� ���� 
	const ���� ������ ���¸� �����ϰ� ���� ����� �̾� ���� ���ų� ȣ���� �� �ְ� �Ѵ�. 

	�������ڸ�, mutable�� ������ ��� ������ ���� ����� �޼��忡���� ���Ⱑ ���ȴ�.

*/

#include <iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam)
		: m_nData(nParam)
	{ };

	~CTest()
	{
	
	};

	// ����� �޼���� ���� �� �����ߴ�.
	int GetData() const
	{
		// ����� �޼���� mutable ��� �������� ���� �� �� �ִ�. (���� ����, �� �����ϴ� �۾��� ����������)
		m_nData = 20;
		return m_nData;
	}

	int SetData(int nParam) 
	{
		m_nData = nParam; 
	}

private:
	mutable int m_nData = 0;
};

int main(int argc, char* argv[])
{
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}