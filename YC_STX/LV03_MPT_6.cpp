#include <iostream>

using namespace std;
int main()
{
	int bucket[256] = {};

	char str[5][3] =
	{
		{ 'A', 'B', 'C' },
		{ 'A', 'G', 'H' },
		{ 'H', 'I', 'J' },
		{ 'K', 'A', 'B' },
		{ 'A', 'B', 'C' }
	};

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			bucket[str[y][x]]++;
		}
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			for (int j = 0; j < bucket[i]; j++)
			{
				cout << (char)i;
			}
		}
	}

	return 0;
}