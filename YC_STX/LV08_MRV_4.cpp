#include <iostream>

using namespace std;

int arr[3][4] =
{
	{ 3, 5, 4, 1 },
	{ 1, 1, 2, 3 },
	{ 6, 7, 1, 2 }
};

int input[4] = {};

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			for (int i = 0; i < 4; i++)
			{
				if (arr[y][x] == input[i])
				{
					if (i != 3)
					{
						arr[y][x] = input[i + 1];
						break;
					}
					else
					{
						arr[y][x] = input[0];
						break;
					}
				}
			}

		}
	}


	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}