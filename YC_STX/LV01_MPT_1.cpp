#include <iostream>

using namespace std;

char findChar(char* input)
{
	int length = 0;
	
	for (int y = 0; y < 3; y++)
	{
		if (input[y] == '\0')
		{
			length = y;
			break;
		}

	}

	return input[length];
}


int main()
{

	char str[3][10] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}


	for (int i = 0; i < 3; i++)
	{
		char a = findChar(str[i]);
		cout << a;
	}


	return 0;
}