/* 
	static ���� ����� ���� ��� ���� �� ����

	���� ����� static ���� ����� ������ �� �ִ�.

	���� ����� �ν��Ͻ��� �������� �ʰ� ���� ȣ�� �� �� �ִ�.
	��ǻ� ���������� �Լ��� ����. ���� Ŭ������ ����� ������ ���̴�.

	�׷��� this �����͸� ����� �� ������, �ݵ�� ����� ���Ǹ� �и��Ͽ� �ۼ��ؾ� �Ѵ�.
	
	��ü ���� ���α׷��ֿ��� ���� �Լ��� ������ �����ϸ� 
	��ü���� ����� ������� �ڵ�� ������ ���ɼ��� Ŀ����.
	���� ���� �Լ��� ���� ��ſ� ���������� ���� ����� Ȱ���ϴ� ���� �ٶ����ϴ�.
*/

#include <iostream>
using namespace std;

// ������ �ڵ�
class CTest
{
public:
	CTest(int nParam)
		: m_nData(nParam)
	{
		m_nCount++;
	};

	int GetData(void)
	{
		return m_nData;
	}

	void ResetCount()
	{
		m_nCount = 0;
	}


	// ���� �޼��� ���� �� ����
	static int GetCount()
	{
		return m_nCount;
	}


private:
	int m_nData;

	// ���� ��� ���� ����(���Ǵ� �ƴϴ�!)
	static int m_nCount;
};

int CTest::m_nCount = 0;

int main()
{
	// CTest Ŭ������ ���� ��� ���� ����
	CTest a(5), b(10);

	// ���� ����� ����
	cout << a.GetCount() << endl;
	b.ResetCount();

	// ���� ����� ����, �ν��Ͻ� ���̵� ���� ����!
	cout << CTest::GetCount() << endl;

	return 0;
}