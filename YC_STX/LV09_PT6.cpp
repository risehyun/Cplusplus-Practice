#include <iostream>

using namespace std;

int a = 0, b = 0;

void Swap(int a, int b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

int main()
{
	char arr[3][3] = {};

	int yx[2][2] = {};

	int temp = 0;

	char flag = 'A';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = flag;
			flag++;
		}
	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> yx[i][j];
		}
	}

	temp = arr[yx[0][0]][yx[0][1]];
	arr[yx[0][0]][yx[0][1]] = arr[yx[1][0]][yx[1][1]];
	arr[yx[1][0]][yx[1][1]] = temp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}

		cout << endl;
	}

	return 0;
}