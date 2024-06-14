#include <iostream>

using namespace std;
int main()
{
	int map[3][6] =
	{
		{ 3, 5, 4, 2, 2, 3 },
		{ 1, 3, 3, 3, 4, 2 },
		{ 5, 4, 4, 2, 3, 5 }
	};

	char price[6] =
	{
		'T',
		'P',
		'G',
		'K',
		'C'
	};

	char column = ' ';
	int row = 0;
	int index = 0;

	cin >> column >> row;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (y == ((int)column - 65) && x == row)
			{
				index = map[y][x];
			}
		}
	}

	cout << price[index - 1];


	return 0;
}