#include <iostream>

using namespace std;
int main()
{
	char arr[5][11] = {};
	int length[5] = {};
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			if (arr[y][x] != '\0')
			{
				length[y]++;
			}
		}
	}

	for (int y = 0; y < 5; y++)
	{
		if (max < length[y])
		{
			max = length[y];
		}
	}

	for (int y = 0; y < 5; y++)
	{
		if (length[y] == max)
		{
			cout << arr[y];
		}
	}

	return 0;
}