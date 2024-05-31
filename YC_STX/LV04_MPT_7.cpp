#include <iostream>

using namespace std;

int map[5][5] =
{ 3, 3, 5, 3, 1,
  2, 2, 4, 2, 6,
  4, 9, 2, 3, 4,
  1, 1, 1, 1, 1,
  3, 3, 5, 9, 2
};

int direct[4][2] =
{
	-1, -1, // 왼쪽 위
	-1, 1,  // 오른쪽 위
	1, -1,  // 왼쪽 아래
	1, 1    // 오른쪽 아래
};

int sum(int y, int x)
{
	int result = 0;

	for (int i = 0; i < 4; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (newX >= 0 && newX <= 4 && newY >= 0 && newY <= 4)
		{
			result += map[newY][newX];
		}
	}

	return result;

}


int main()
{

	int sumResult = 0, maxValue = 0, maxY = 0, maxX = 0;


	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			sumResult = sum(y, x);

			if (sumResult > maxValue)
			{
				maxValue = sumResult;
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << maxY << " " << maxX;


	return 0;
}