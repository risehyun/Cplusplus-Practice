#include <iostream>

using namespace std;
int main()
{
	char str[4][3] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> str[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (str[y][x] != '_')
			{
				if (str[y + 1][x] == '_')
				{
					str[y + 1][x] = str[y][x];
					str[y][x] = '_';
				}
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << str[y][x];
		}
		cout << endl;
	}

	return 0;
}