#include <iostream>

using namespace std;

int Length(char* str)
{
	for (int i = 0; i < 9; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	char str[9] = "";

	cin >> str;

	int length = Length(str);

	for (int y = 0; y < length; y++)
	{
		for (int x = 0; x < y + 1; x++)
		{
			cout << str[x];
		}
		cout << endl;
	}

	return 0;
}