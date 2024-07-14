#include <iostream>

using namespace std;

int arr[4][4] = {};
int direct[4][2] = 
{
	{ -1, 0 }, // 상
	{ 1, 0 }, // 하
	{ 0, -1 }, // 좌
	{ 0, 1 }  // 우
};

int Search(int _x, int _y)
{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		int newY = _y + direct[i][0];
		int newX = _x + direct[i][1];

		if (newX >= 0 && newX <= 3 && newY >= 0 && newY <= 3)
		{
			sum += arr[newY][newX];
		}

		if (sum > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];
		}
	}

	int result = -1;
	int flag = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == 1)
			{
				result = Search(y, x);

				if (result == 1)
				{
					flag = 1;
				}
			}
		}
	}


	if (flag == 1)
	{
		cout << "위험한 상태";
	}
	else
	{
		cout << "안전한 상태";
	}

	return 0;
}