#include <iostream>

using namespace std;

int rectSum(int image[4][4], int _y, int _x)
{
	int sum = 0;

	for (int y = _y; y <= _y + 1; y++)
	{
		for (int x = _x; x <= _x + 2; x++)
		{
			if (x >= 0 && x < 4 && y >= 0 && y < 4)
			{
				sum += image[y][x];
			}
			
		}
	}

	return sum;
}

int main()
{
	int image[4][4] = {};
	int maxY = 0, maxX = 0, maxValue = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> image[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			int result = rectSum(image, y, x);

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