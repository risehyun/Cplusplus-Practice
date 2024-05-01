#include <iostream>

using namespace std;

void checkChar(char _flag)
{
	// 소문자 판별
	if ('a' <= _flag && 'z' >= _flag)
	{
		cout << "소";
	}
	else if ('A' <= _flag && 'Z' >= _flag)
	{
		cout << "대";
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