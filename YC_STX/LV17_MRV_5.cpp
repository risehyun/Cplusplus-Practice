#include <iostream>

using namespace std;

int map[4][5] = {};

struct Point
{
	int x;
	int y;
};

Point startPoint{ -1, -1 };
Point endPoint{ -1, -1 };

void FindStart()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (map[y][x] == 1)
			{
				startPoint.y = y;
				startPoint.x = x;

				return;
			}
		}
	}

}

void FindEnd()
{

	for (int y = 0; y < 4; y++)
	{
		if (map[y][startPoint.x] == 0)
		{
			endPoint.y = (y - 1);
		}
	}

	for (int x = startPoint.x; x < 5; x++)
	{
		if (map[endPoint.y][x] == 0)
		{
			endPoint.x = (x - 1);
		}
	}

}

void Print()
{
	cout << "(" << startPoint.y << "," << startPoint.x << ")" << endl;
	cout << "(" << endPoint.y << "," << endPoint.x << ")" << endl;
}

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cin >> map[y][x];
		}
	}

	FindStart();
	FindEnd();
	Print();

	return 0;
}