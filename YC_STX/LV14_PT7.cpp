#include <iostream>

using namespace std;

void magic(int arr[3][3])
{
	int num = 1;
	int index = 3;

	for (int y = 0; y < 3; y++)
	{
		for (int x = y; x < 3; x++)
		{
			arr[y][x] = num;
			num++;
		}
		index--;
	}
}

void output(int arr[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x];
		}

		cout << endl;
	}
}

int main()
{
	int arr[3][3] = {};

	magic(arr);
	output(arr);

	return 0;
}