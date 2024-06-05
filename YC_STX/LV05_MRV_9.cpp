#include <iostream>

using namespace std;

int isPattern(int arr[4][5], int ySize, int xSize, int _y, int _x)
{
	int sum = 0;

	for (int y = _y; y < _y + ySize; y++)
	{
		for (int x = _x; x < _x + xSize; x++)
		{
			if (y < 4 )
			sum += arr[y][x];
		}
	}

	return sum;

}



int main()
{
	int arr[4][5] =
	{
		{ 3, 5, 4, 2, 5 },
		{ 3, 3, 3, 2, 1 },
		{ 3, 2, 6, 7, 8 },
		{ 9, 1, 1, 3, 2 }
	};

	int ySize = 0, xSize = 0, maxValue = 0, maxY = 0, maxX = 0;

	cin >> ySize >> xSize;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			int result = isPattern(arr, ySize, xSize, y, x);

			if (result > maxValue)
			{
				maxValue = result;
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << "(" << maxY << "," << maxX << ")";

	return 0;
}