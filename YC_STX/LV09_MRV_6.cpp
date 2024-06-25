#include <iostream>

using namespace std;

int main()
{
	int bucket[256] = {};

	char input[4][4] = {};

	char arr[4][4] =
	{
		{ 'A', 'B', 'C', 'D' },
		{ 'B', 'B', 'A', 'B' },
		{ 'C', 'B', 'A', 'C' },
		{ 'B', 'A', 'A', 'A' }
	};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> input[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (input[y][x] == arr[y][x])
			{
				bucket[input[y][x]]++;
			}
		}
	}


	int max = 0;

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] > max)
		{
			max = i;
		}
	}

	char result = (char)max+1;

	cout << result;




	return 0;
}