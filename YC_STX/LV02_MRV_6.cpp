#include <iostream>

using namespace std;

int isExist(int mask[3][3], int arr[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (mask[y][x] == 1 && (arr[y][x] >= 3 && arr[y][x] <= 5))
			{
				return 1;
			}
		}
	}

	return 0;
}


int main()
{
	int mask[3][3] = {};

	int arr[3][3] =
	{
		{ 3, 1, 9 },
		{ 7, 2, 1 },
		{ 1, 0, 8 }
	};

	int result = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> mask[y][x];
		}
	}

	result = isExist(mask, arr);

	if (result == 1)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}




	return 0;
}