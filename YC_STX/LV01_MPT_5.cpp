#include <iostream>

using namespace std;

void removeChar(char* str, int index)
{
	for (int i = index; i < 8; i++)
	{
		str[i] = str[i + 1];
	}

	cout << str;
}

int main()
{
	char str[8] = {};

	int index = 0;

	cin >> str >> index;

	removeChar(str, index);

	return 0;
}