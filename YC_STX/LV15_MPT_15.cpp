#include <iostream>

using namespace std;

int map[5][4] = {};

int main()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][0] == 1)
			{
				for (int index = 0; index < 4; index++)
				{

					int flag = 1;

					if (map[y][index] == 0)
					{
						flag = 0;
						break;
					}
					else
					{
						if (flag == 1)
						{
							for (int idx = 0; idx < 4; idx++)
							{
								if (y > 0)
								{

									map[y][idx] = map[y - 1][idx];
									map[y - 1][idx] = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}

	return 0;
}