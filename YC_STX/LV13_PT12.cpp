#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {
		{ 3, 4, 1, 6 },
		{ 3, 5, 3, 6 },
		{ 0, 0, 0, 0 },
		{ 5, 4, 6, 0 }
	};

	int min = 5;
	int max = 0;

	int yMaxResult = 0, xMaxResult = 0;
	int yMinResult = 0, xMinResult = 0;

	for (int x = 0; x < 4; x++)
	{
		cin >> arr[2][x];
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				yMaxResult = y;
				xMaxResult = x;
			}
			
			else if (arr[y][x] < min)
			{
				min = arr[y][x];
				yMinResult = y;
				xMinResult = x;
			}
		}
	}

	cout << "MAX=" << max << "(" << yMaxResult << "," << xMaxResult << ")" << endl;
	cout << "MIN=" << min << "(" << yMinResult << "," << xMinResult << ")" << endl;

	return 0;
}