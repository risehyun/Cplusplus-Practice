#include <iostream>

using namespace std;

int arr[4][4] = {};

void Sum(int targetY, int targetX)
{
	int sum = 0;

	// 가로줄 채우기
	for (int x = 0; x < 3; x++)
	{
		sum += arr[targetY][x];
	}

	arr[targetY][3] = sum;
	sum = 0;

	// 세로줄 채우기
	for (int y = 0; y < 3; y++)
	{
		sum += arr[y][targetX];
	}

	arr[3][targetX] = sum;
	sum = 0;

	if (targetY == 0 && targetX == 0)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (y == x)
				{
					sum += arr[y][x];
				}
			}
		}

		arr[3][3] = sum;
	}


}


int main()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (y == 0 || x == 0)
			{
				Sum(y, x);
			}
		}
	}

	cout << endl;
	cout << endl;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}



	return 0;
}