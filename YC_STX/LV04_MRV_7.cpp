#include <iostream>

using namespace std;

int findMax(int map[3][3], int bitarray[2][2], int _y, int _x)
{
	int sum = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (bitarray[y][x] == 1)
			{
				sum += map[y + _y][x + _x];
			}
		}
	}

	return sum;

}

int main()
{
	int map[3][3] =
	{
		{ 3, 5, 1 },
		{ 3, 8, 1 },
		{ 1, 1, 5 }
	};

	int bitarray[2][2] = {};

	int maxValue = 0, value = 0, maxY = 0, maxX = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> bitarray[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			value = findMax(map, bitarray, y, x);

			if (value > maxValue)
			{
				maxValue = value;
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << "(" << maxY << "," << maxX << ")";

	return 0;
}