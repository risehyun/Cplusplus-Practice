#include <iostream>

using namespace std;

int counting(int vect[3][3], int target)
{
	int count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (vect[y][x] == target)
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	int vect[3][3] =
	{
		{ 3, 7, 4 },
		{ 2, 2, 4 },
		{ 2, 2, 5 }
	};

	int target[3] = {};

	int result = 0, maxCount = 0, maxIndex = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> target[i];

		result = counting(vect, target[i]);

		if (maxCount < result)
		{
			maxCount = result;
			maxIndex = target[i];
		}
	}

	cout << maxIndex;

	return 0;
}