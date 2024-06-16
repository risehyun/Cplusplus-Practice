#include <iostream>

using namespace std;

int main()
{

	int arr[3][2][2] = 
	{
		{
			{ 2, 4 },
			{ 1, 5 }
		},

		{
			{ 2, 3 },
			{ 3, 6 }
		},

		{
			{ 7, 3 },
			{ 1, 5 }
		}
	};

	int max = -1, min = 10;
	int zTarget = 0;

	cin >> zTarget;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (arr[zTarget][y][x] > max)
			{
				max = arr[zTarget][y][x];
			}
			
			if (arr[zTarget][y][x] < min)
			{
				min = arr[zTarget][y][x];
				
			}
		}
	}

	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}