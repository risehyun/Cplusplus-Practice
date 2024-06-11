#include <iostream>

using namespace std;

int map[7][7] =
{
	{ 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 1, 0, 1, 0, 0 },
	{ 0, 1, 2, 0, 2, 1, 0 },
	{ 0, 0, 1, 2, 1, 0, 0 },
	{ 0, 0, 2, 1, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0 }
};

int direct[4][2] =
{
	{ -1, 0 }, // 위
	{ 0, -1 }, // 왼쪽
	{ 1, 0 }, // 아래
	{ 0, 1 }  // 오른쪽
};

int find(int yInput, int xInput)
{
	int sum = 0, count = 0, yTarget = 0, xTarget = 0;

	for (int y = 0; y < 4; y++)
	{
		int newY = yInput + direct[y][0];
		int newX = xInput + direct[y][1];

		if (newX >= 0 && newX < 7 && newY >= 0 && newY < 7)
		{
			if (map[newY][newX] == 2)
			{
				yTarget = newY;
				xTarget = newX;

				for (int y = 0; y < 4; y++)
				{
					int findY = yTarget + direct[y][0];
					int findX = xTarget + direct[y][1];

					if (findX >= 0 && findX < 7 && findY >= 0 && findY < 7)
					{
						if (map[findY][findX] == 1)
						{
							count++;
						}
					}

				}

				if (count == 4)
				{
					sum++;
					count = 0;
				}
				else
				{
					count = 0;
				}

			}
		}

	}

	return sum;

}


int main()
{
	int yInput = 0, xInput = 0;

	cin >> yInput >> xInput;

	map[yInput][xInput] = 1;

	int result = find(yInput, xInput);

	cout << result;

	return 0;
}