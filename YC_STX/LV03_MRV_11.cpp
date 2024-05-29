#include <iostream>

using namespace std;

int isPattern(char* input, char* pattern, int startIndex)
{
	for (int i = 0; i < 5; i++)
	{
		if (pattern[i] != input[startIndex + i])
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	char input[10] = "";
	char pattern[6] = "GHOST";
	int result = 0;

	cin >> input;

	for (int i = 0; i < 10; i++)
	{
		if (input[i] == pattern[0])
		{
			result = isPattern(input, pattern, i);

			if (result == 1)
			{
				cout << "존재";
				break;
			}
		}
	}

	if (result == 0)
	{
		cout << "존재하지 않음";
	}


	return 0;
}