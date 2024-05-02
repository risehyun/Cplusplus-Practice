#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] = {};

	int input = 0;

	cin >> input;

	if (input % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = i + 1;	
		}
	}
	else
	{
		int x = 3;

		for (int i = 0; i < 4; i++)
		{
			arr[i][x] = i + 1;
			x--;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}

		cout << endl;
	}

	return 0;
}