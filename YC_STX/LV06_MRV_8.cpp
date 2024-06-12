#include <iostream>

using namespace std;
int main()
{
	char arr[5][3] =
	{
		{ '_', '_', '_' },
		{ '_', '_', '_' },
		{ 'A', 'T', 'K' },
		{ '_', '_', '_' },
		{ '_', '_', '_' }
	};

	char target = ' ';
	char command[6] = "";



	for (int i = 0; i < 7; i++)
	{
		cin >> target >> command;

		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (arr[y][x] == target)
				{
					if (0 == strcmp(command, "UP"))
					{
						if ((y - 1) >= 0)
						{
							arr[y - 1][x] = target;
							arr[y][x] = '_';
							strcpy_s(command, " ");
						}
					}

					if (0 == strcmp(command, "DOWN"))
					{
						if ((y + 1) < 5)
						{
							arr[y + 1][x] = target;
							arr[y][x] = '_';
							strcpy_s(command, " ");
						}
					}

					if (0 == strcmp(command, "RIGHT"))
					{
						if (x + 1 < 4)
						{
							arr[y][x + 1] = target;
							arr[y][x] = '_';
							strcpy_s(command, " ");
						}
					}

					if (0 == strcmp(command, "LEFT"))
					{
						if (x - 1 >= 0)
						{
							arr[y][x - 1] = target;
							arr[y][x] = '_';
							strcpy_s(command, " ");
						}
					}
				}
			}
		}


	}


	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x];
		}
		cout << endl;
	}

	return 0;
}