#include <iostream>

using namespace std;

int direct[4][2] =
{
	{ -1, 0 }, // ╩С
	{ 1, 0 },  // го
	{ 0, -1 },  // аб
	{ 0, 1 }   // ©Л
};


int main()
{
	int map[4][4] = {};

	int yInput = 0;
	int xInput = 0;

	cin >> yInput >> xInput;

	map[yInput][xInput] = 1;

	for (int z = 0; z < 4; z++)
	{
		for (int y = 0; y < 4; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (map[y][x] != 0)
				{
					for (int i = 0; i < 4; i++)
					{
						int newY = y + direct[i][0];
						int newX = x + direct[i][1];

						if ((newY >= 0 && newY < 4) && (newX >= 0 && newX < 4))
						{
							if (map[newY][newX] == 0)
							{
								map[newY][newX] = map[y][x] + 1;
							}
						}
					}
				}

			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}