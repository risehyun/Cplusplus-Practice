#include <iostream>

using namespace std;

char map[3][4] =
{
	{ 'A', 'B', 'G', 'K' },
	{ 'T', 'T', 'A', 'B' },
	{ 'A', 'C', 'C', 'D' }
};

char pattern[2][2] = {};

int isPattern(int _y, int _x)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (map[y+_y][x+_x] != pattern[y][x])
			{
				return 0;
			}
		}
	}

	return 1;
}

int main()
{
	int count = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> pattern[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == pattern[0][0])
			{
				int result = isPattern(y, x);
				
				if (result == 1)
				{
					count += result;
					break;
				}
			}
		}
	}

	if (count > 0)
	{
		cout << "발견 (" << count << "개)";
	}
	else
	{
		cout << "미발견";
	}


	return 0;
}