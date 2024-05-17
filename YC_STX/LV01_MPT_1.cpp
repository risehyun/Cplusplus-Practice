#include <iostream>

using namespace std;

char findChar(char* input)
{
	int length = 0;
	
	for (int x = 0; x < 10; x++)
	{
		if (input[x] == '\0')
		{
			length = x - 1;
			return input[length];
			break;
		}
	}
	
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
		cout << findChar(str[i]);
	}

	return 0;
}