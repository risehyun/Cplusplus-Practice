#include <iostream>

using namespace std;
int main()
{
	int mask1[2][5] =
	{
		{ 0, 0, 1, 0, 0 },
		{ 0, 0, 1, 1, 1 }
	};

	int mask2[2][5] =
	{
		{ 3, 5, 4, 1, 1 },
		{ 3, 5, 2, 5, 6 }
	};

	int input = 0, flag = 0;

	cin >> input;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (mask1[y][x] == 1 && mask2[y][x] == input)
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		cout << input << " 존재";
	}
	else
	{
		cout << input << " 없음";
	}

	return 0;
}