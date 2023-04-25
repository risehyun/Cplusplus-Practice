/*
	������ ���� ����

	�����ڵ� �Լ��̹Ƿ� �翬�� ���� ������ �� �ִ�.
	�̶� � �����ڸ� ȣ�������� �����Ϸ��� �Լ��� �Ű������� Ȯ���ϰ� �˾Ƽ� �����ϰ� �ȴ�.
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	// ����Ʈ �����ڴ� ����.
	// �Ű� ������ int �ϳ��� ������ �Լ� ���� �� ����

	CMyData(int nParam)
		: m_nData(nParam)
	{};

	// �Ű������� int �ڷ��� �� ���� ������ �Լ� ���� ����
	CMyData(int x, int y)
		: m_nData(x + y)
	{};

	int GetData(void) const
	{
		return m_nData;
	}

private:
	int m_nData;

};

int main(int argc, char* argv[])
{
	CMyData a(10);
	CMyData b(3, 4);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}