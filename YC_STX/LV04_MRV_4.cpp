#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {};

	char side = ' ';
	int number = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> side >> number;

		if (side == 'G')
		{
			for (int x = 0; x < 4; x++)
			{
				arr[number][x] = 1;
			}
		}
		else if (side == 'S')
		{
			for (int y = 0; y < 4; y++)
			{
				arr[y][number] = 1;
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x];
		}
		cout << endl;
	}



	return 0;
}