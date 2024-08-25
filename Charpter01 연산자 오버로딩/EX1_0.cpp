#include <iostream>

using namespace std;
int main()
{
	int arr[9][9] = { 0 };
	int maxValue = -1;
	int maxY = -1, maxX = -1;

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			cin >> arr[y][x];

			if (arr[y][x] > maxValue)
			{
				maxValue = arr[y][x];
				maxY = y;
				maxX = x;
			}
		}
	}

	maxY += 1;
	maxX += 1;

	cout << maxValue << '\n' << maxY << ' ' << maxX;



	return 0;
}