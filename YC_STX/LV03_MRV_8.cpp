#include <iostream>

using namespace std;

int compareStr(char str[3][10], char* bucket)
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			bucket[str[y][x]]++;
		}
	}

	for (int i = 1; i < 256; i++)
	{
		if (bucket[i] > 1)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	char str[3][10] = {};
	char bucket[256] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}

	int result = compareStr(str, bucket);

	if (result == 1)
	{
		cout << "No";
	}
	else
	{
		cout << "Perfect";
	}

	return 0;
}