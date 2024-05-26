#include <iostream>

using namespace std;
int main()
{
	int levelTable[4][2] =
	{
		{ 10, 20 },
		{ 30, 60 },
		{ 100, 150 },
		{ 200, 300 }
	};

	int input[6] = {};
	int count[4] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> input[i];
	}

	for (int index = 0; index < 6; index++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (input[index] >= levelTable[y][0]
				&& input[index] <= levelTable[y][1])
			{
				count[y]++;
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		cout << "lev" << y << ":" << count[y] << endl;
	}

	return 0;
}