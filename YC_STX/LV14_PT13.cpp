#include <iostream>

using namespace std;
int main()
{
	/*
	
	�׸��� �� ���ڸ� **����Ű��** ������ 2���� ������ּ���

	�����͸��� �̿��Ͽ� �ΰ��� char������ SWAP �ϰ� ��� �� �ּ���
	
	*/

	char input[2] = {};
	char temp = ' ';

	for (int i = 0; i < 2; i++)
	{
		cin >> input[i];
	}

	char* a = &input[0];
	char* b = &input[1];

	temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << " " << *b;

	return 0;
}