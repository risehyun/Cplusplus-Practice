/*
	���� ������ ��ȣ��
*/

#include <iostream>
using namespace std;

// r-value ���� ���
void TestFunc(int&& rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

// r-value ���� ���İ� ȣ���� �ڵ尡 ����.
void TestFunc(int nParam)
{
	cout << "TestFunc(int)" << endl;
}

int main()
{
	// �Ʒ� �ڵ�� int���� int&&�� ��� �����ϱ� ������ ��ȣ�� ȣ���̹Ƿ� ������ �߻��Ѵ�.
	TestFunc(3 + 5);

	return 0;
}

/*
	���ݱ����� ���ظ� ���� ���� int�� ���� �⺻ �ڷ����� ���÷� ���������,
	��� r-value ������ �� �ʿ��� ������ �⺻ �ڷ����� �ƴ� 'Ŭ������ ����� ��'�̴�.
*/