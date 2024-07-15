#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
};

int main()
{
	int arr[3][3] = {};

	int aMax = -1;
	int bMax = -1;

	Point aIndex;
	aIndex.y = -1;
	aIndex.x = -1;

	Point bIndex;
	bIndex.y = -1;
	bIndex.x = -1;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];

			if (arr[y][x] > aMax)
			{
				if (aMax != -1)
				{
					bMax = aMax;
					aMax = arr[y][x];
				}
				else
				{
					aMax = arr[y][x];
				}
			
				bIndex.y = aIndex.y;
				bIndex.x = aIndex.x;

				aIndex.y = y;
				aIndex.x = x;
			}
		}
	}

	cout << "첫번째:" << aMax << "(" << aIndex.y << ", " << aIndex.x << ")" << endl;
	cout << "두번째:" << bMax << "(" << bIndex.y << ", " << bIndex.x << ")" << endl;

	return 0;
}