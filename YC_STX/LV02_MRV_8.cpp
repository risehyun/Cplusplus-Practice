#include <iostream>

using namespace std;
int main()
{
	char arr[5][5] =
	{
		{ 'A', 'B', 'C', 'D', 'E' },
		{ 'F', 'G', 'H', 'I', 'J' },
		{ 'K', 'L', 'M', 'N', 'O' },
		{ 'P', 'Q', 'R', 'S', 'T' },
		{ 'U', 'V', 'W', 'X', 'Y' }
	};

	char input = ' ';

	int yOffSet = 0;
	int xOffSet = 0;

	cin >> input;

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] == input)
			{
				yOffSet = y - 2;
				xOffSet = x - 2;
			}
		}
	}

	cout << yOffSet << "," << xOffSet;

	return 0;
}