#include <iostream>


int arr[3][3] = {};

using namespace std;

int find(int y, int x)
{
	for (int i = 0; i < 3; i++)
	{
		if (arr[y][x] != arr[y][i])
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (x == 0)
			{
				int result = find(y, x);

				if (result == 1)
				{
					cout << "x" << endl;
				}
				else
				{
					cout << arr[y][x] << endl;
				}
			}
		}
	}



	return 0;
}