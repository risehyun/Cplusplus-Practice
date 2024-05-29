#include <iostream>

using namespace std;

char findMaxChar(char* str)
{
	char maxChar = ' ';

	int maxCount = 0;

	char bucket[256] = {};

	for (int i = 0; i < 11; i++)
	{
		bucket[str[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] != 0 && bucket[i] > maxCount)
		{
			maxCount = bucket[i];
			maxChar = (char)i;
		}

	}

	return maxChar;
}

int main()
{
	char str[11] = {};

	cin >> str;

	char result = findMaxChar(str);

	cout << result;

}