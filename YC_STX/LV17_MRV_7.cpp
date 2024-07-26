#include <iostream>

using namespace std;
int main()
{
	int map[5] = {};

	int maxIndex = 4;
	int startIndex = 0;
	int lifeTime = 0;

	cin >> startIndex >> lifeTime;

	map[startIndex] = maxIndex - startIndex;

	for (int i = startIndex; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (map[j] == 0)
			{
				cout << "_";
			}
			else
			{
				cout << map[j];
			}
		}

		cout << endl;

		int next = maxIndex - 1 - i;

		if (next == 0)
		{
			map[i] = 0;
		}
		if (i < 4)
		{
			map[i + 1] = next;
			map[i] = 0;
		}

	}




	return 0;
}