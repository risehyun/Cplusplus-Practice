#include <iostream>

using namespace std;
int main()
{
	int arr[7][4] = {};
	int input[3] = {};

	int number = 1;
	int yIndex = 0;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = number;
			number++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[input[i]][j] = 0;
		}
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}