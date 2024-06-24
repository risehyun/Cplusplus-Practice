#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;
};

int map[3][4] = {};

int Check(int y, int x)
{
	int start = y + 1;
	int end = 3 - y;

	for (int i = start; i <= end; i++)
	{
		if (map[i][x] == 1)
		{
			return 1;
		}
	}

	start = x + 1;
	end = 4 - x;

	for (int i = start; i <= end; i++)
	{
		if (map[y][i] == 1)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	Point location[3] = {};

	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> location[i].y >> location[i].x;
	}

	for (int z = 0; z < 3; z++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (y == location[z].y && x == location[z].x)
				{
					map[y][x] = 1;
				}
			}
		}
	}

	cout << endl;
	// 입력 결과 출력
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 1)
			{
				result = Check(y, x);

				if (result == 1)
				{
					cout << "위험" << endl;
					break;
				}
				else
				{
					cout << "안전" << endl;
				}
			}
		}
	}

	return 0;
}