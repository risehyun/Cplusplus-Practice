#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] = {};

	int input = 0;

	cin >> input;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 2 - y; x < 3; x++)
		{
			arr[y][x] = input;
			input++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ' ')
			{
				cout << 0;
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