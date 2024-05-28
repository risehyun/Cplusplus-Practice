#include <iostream>

using namespace std;

char findMax(char* input)
{
	int list[256] = {};

	int maxCount = 0;
	char maxChar = ' ';

	for (int i = 0; i < 8; i++)
	{
		list[input[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		int count = 0;
		if (list[i] != 0)
		{
			count = list[i];

			if (maxCount < count)
			{
				maxCount = count;
				maxChar = (char)i;
			}
		}
	}

	return maxChar;
}

int main()
{
	char input[8] = {};

	for (int i = 0; i < 8; i++)
	{
		cin >> input[i];
	}

	char result = findMax(input);

	cout << result;


	return 0;
}