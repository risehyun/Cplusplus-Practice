#include <iostream>

using namespace std;

void checkChar(char _flag)
{
	// �ҹ��� �Ǻ�
	if ('a' <= _flag && 'z' >= _flag)
	{
		cout << "��";
	}
	else if ('A' <= _flag && 'Z' >= _flag)
	{
		cout << "��";
	}
}

int main()
{
	char arr[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		checkChar(arr[i]);
	}
}