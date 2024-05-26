#include <iostream>

using namespace std;

int map[2][3] =
{
	{ 3, 55, 42 },
	{ -5, -9, -10 },
};

int isExist(int target)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (map[y][x] == target)
			{
				return 1;
			}
		}
	}

	return 0;
}

int main()
{
	int pix[2][2] = {};
	int result = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> pix[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			result = isExist(pix[y][x]);

			if (result == 0)
			{
				cout << "N" << " ";
			}
			else
			{
				cout << "Y" << " ";
			}
		}
		cout << endl;
	}



	return 0;
}