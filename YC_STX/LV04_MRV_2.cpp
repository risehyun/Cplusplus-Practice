#include <iostream>

using namespace std;

int find(int arr[5][4], int direct[8][2])
{
	int sum = 0;

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == 1)
			{
				for (int y = 0; y < 8; y++)
				{
					int newY = y + direct[y][0];
					int newX = x + direct[y][1];

					if (newX >= 0 && newX < 4 && newY >= 0 && newY < 5)
					{
						sum += arr[newY][newX];
					}

				}
			}
		}
	}

	if (sum > 0)
	{
		return 1;
	}

	return 0;
}

int main()
{

	int arr[5][4] = {};

	int direct[8][2] =
	{
		{ -1, -1 }, // 왼쪽 위
		{ -1, 0 }, // 위
		{ -1, 1 }, // 오른쪽 위
		{ 0, 1 }, // 오른쪽
		{ 1, 1 }, // 오른쪽 아래
		{ 1, 0 }, // 아래
		{ 1, -1 }, // 왼쪽 아래
		{ 0, -1 }  // 왼쪽
	};

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];
		}
	}

	int result = find(arr, direct);


	if (result == 1)
	{
		cout << "불안정한 상태";
	}
	else
	{
		cout << "안정된 상태";
	}

	return 0;
}