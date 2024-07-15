#include <iostream>

using namespace std;
int main()
{
	char arr[4][10] = {};

	int max = 0;
	int min = 11;
	int maxIndex = 0;
	int minIndex = 0;

	for (int y = 0; y < 4; y++)
	{
		string str;
		cin >> str;

		int length = str.length();

		if (length > max)
		{
			max = length;
			maxIndex = y;
		}
		else if (length < min)
		{
			min = length;
			minIndex = y;
		}

		for (int x = 0; x < length; x++)
		{
			arr[y][x] = str[x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (y == maxIndex || y == minIndex)
			{
				arr[y][x] += ' ';
			}

			cout << arr[y][x];
		}
		cout << endl;
	}

	return 0;
}