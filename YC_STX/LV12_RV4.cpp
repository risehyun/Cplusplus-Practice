#include <iostream>

using namespace std;
int main()
{
	int arr[5][5] = {};

	int input = 0;

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		arr[i][0] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		arr[i][4] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		arr[4][i] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << '_';
			}
			else
			{
				cout << arr[i][j];
			}
		}

		cout << endl;
	}

	return 0;
}