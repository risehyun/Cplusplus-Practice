#include <iostream>

using namespace std;
int main()
{
	char arr[4][7] = {};

	int length[4] = {};
	int result[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (arr[y][x] == '\0')
			{
				length[y] = x;
				break;
			}
		}
		result[y] = length[y];
	}


	for (int i = 0; i < 4; i++)
	{
		for (int x = i+1; x < 4; x++)
		{
			if (result[i] > result[x])
			{
				int temp = 0;
				temp = result[i];
				result[i] = result[x];
				result[x] = temp;
			}
		}
	}


	for (int i = 0; i < 4; i++)
	{
		cout << result[i];
	}

	return 0;
}