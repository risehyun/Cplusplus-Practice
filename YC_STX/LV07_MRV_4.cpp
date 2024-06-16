#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0;

	int arr[3][2][3] = {};

	cin >> a >> b;

	for (int z = 0; z < 3; z++)
	{
		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (y == 0)
				{
					arr[z][y][x] = a;
				}
				else
				{
					arr[z][y][x] = b;
				}
			}
		}
	}

	for (int z = 0; z < 3; z++)
	{
		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				cout << arr[z][y][x];
			}
			cout << endl;
		}
	}

	return 0;
}