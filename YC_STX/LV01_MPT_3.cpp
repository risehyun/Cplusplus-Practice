#include <iostream>

using namespace std;

int arr[2][3] = {};

void getMax(int* dy, int* dx)
{
	int max = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (max < arr[y][x])
			{
				max = arr[y][x];

				*dy = y;
				*dx = x;
			}
		}
	}
};

void getMin(int* dy, int* dx)
{
	int min = 10000;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (min > arr[y][x])
			{
				min = arr[y][x];

				*dy = y;
				*dx = x;
			}
		}
	}
};

int main()
{
	int maxY = 0, maxX = 0, minY = 0, minX = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	getMax(&maxY, &maxX);
	getMin(&minY, &minX);

	cout << "(" << maxY << "," << maxX << ")" << endl;
	cout << "(" << minY << "," << minX << ")";

	return 0;
}