#include <iostream>

using namespace std;

int Compare(int aBit[4][4], int bBit[4][4])
{
	int flag = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (aBit[y][x] && bBit[y][x])
			{
				flag = 1;
			}
		}
	}

	return flag;
}

int main()
{
	int aBit[4][4] = {};
	int bBit[4][4] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> aBit[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> bBit[y][x];
		}
	}

	int result = Compare(aBit, bBit);

	if (result == 1)
	{
		cout << "걸리다";
	}
	else
	{
		cout << "걸리지않는다";
	}

	return 0;
}