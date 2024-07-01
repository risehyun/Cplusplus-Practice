#include <iostream>

using namespace std;
int main()
{
	char arr[4][4] = {};

	int count = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (arr[y][x] != '#')
			{
				count++;
			}
		}
		cout << count << " ";
		count = 0;
	}


	return 0;
}