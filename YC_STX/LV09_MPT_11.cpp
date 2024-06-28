#include <iostream>

using namespace std;

int map[4][4] = 
{
	{ 0, 0, 0, 0 },
	{ 0, 1, 1, 0 },
	{ 2, 2, 3, 0 },
	{ 1, 3, 3, 1 }
};

int main()
{
	int flag = 0;
	int targetY = 0, targetX = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (y > 0 && (map[y - 1][x] > map[y][x]))
			{
				flag = 1;
				targetY = y;
				targetX = x;
			}
		}
	}

	if (flag == 1)
	{
		cout << "안전하지 않은 성" << endl;
		cout << targetY << ", " << targetX << endl;
	}
	else
	{
		cout << "안전한 성" << endl;
	}

	return 0;
}