#include <iostream>

using namespace std;
int main()
{
	int input[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	int arr[4][4] =
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	int index = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == input[index])
			{
				arr[y][x] = index + 1;
				index++;
			}
			else
			{
				arr[y][x] = 0;
			}
		}
	}

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