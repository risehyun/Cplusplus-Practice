/*
	TEST ���ӽ����̽��� using ���� �߰�
	=> ��ȣ�� ������ ������ ����
*/

#include <iostream>


int nData = 100;

namespace TEST
{
	int nData = 200;
}

using namespace std;

int main()
{
	cout << nData << endl;

	return 0;
}