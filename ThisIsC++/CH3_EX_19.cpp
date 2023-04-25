/*
	this �������� ���

	this �����ʹ� �����ڰ� �ۼ� ���� Ŭ������ ���� �ν��Ͻ��� ���� �ּҸ� ����Ű�� �������̴�.
	��ü�� ������ ����Ǵ� �ñ�� Ŭ������ ��������� ���Ǵ� �̷��� ���̴�.
	���� ��ü���� �ν��Ͻ� �ּҸ� �����ڰ� �ۼ��ϴ� ���� �ܰ迡���� �� ����� ����.
	�̶� �ּҰ� ���� ������ ���� �� �����δ� this��� ������ ����(��������)�� ���� �ȴ�.
	�̷��� this �����͸� ����ϸ� ����ڰ� �ν��Ͻ� �ּҸ� �Ѱ��� �� �ֵ��� ���� ���¿��� this�� ��� ����� �� �ֱ� ������
	�ۼ� �Ǽ��� ����Ű�� �ʵ��� ��õ������ ������ �� �ִ�.
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam)
		: m_nData(nParam)
	{};

	void PrintData()
	{
		// m_nData�� ���� ����Ѵ�.
		cout << m_nData << endl;

		// CMyData Ŭ������ ����� m_nData�� ���� ����Ѵ�.
		cout << CMyData::m_nData << endl;

		// CMyData Ŭ������ ����� m_nData�� ���� ����Ѵ�.
		cout << this->m_nData << endl;

		// �޼��带 ȣ���� �ν��Ͻ��� CMyData Ŭ���� ��� m_nData�� ����Ѵ�.
		cout << this->CMyData::m_nData << endl;
	}

private:
	int m_nData;
};

int main(int argc, char* argv[])
{
	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

	return 0;
}