#include <iostream>

using namespace std;

int arr[3][3] =
{
	{ 3, 5, 9 },
	{ 4, 2, 1 },
	{ 1, 1, 5 }
};

int Masking(int input[3][3])
{
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (input[i][j] != 0)
			{
				result += arr[i][j];
			}
		}
	}

	return result;
}

int main()
{
	int input[3][3] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> input[x][y];

		}
	}

	int result = Masking(input);

	cout << result;

	return 0;
}