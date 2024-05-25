#include <iostream>

using namespace std;

int isExit(int* arr, int target)
{
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == target)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	int arr[6] = { 3, 7, 4, 1, 2, 6 };
	int univer[2][2] = {};

	int result = 0;


	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> univer[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			result = isExit(arr, univer[y][x]);

			if (result == 1)
			{
				cout << "OK" << " ";
			}
			else
			{
				cout << "NO" << " ";
			}
		}

		cout << endl;

	}






	return 0;
}