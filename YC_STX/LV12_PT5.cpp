#include <iostream>

using namespace std;
int main()
{
	int arr[3][4] = {};

	int input = 0;

	cin >> input;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 2 - y; x < 4; x++)
		{
			arr[y][x] = input;
			input++;
		}

		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << ' ';
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