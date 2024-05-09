#include <iostream>

using namespace std;

void CountLine(char arr[3][10], int length[3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (arr[y][x] != '\0')
			{
				length[y]++;
			}
		}
	}
}

int main()
{
	char arr[3][10] =
	{
		"",
		"",
		""
	};

	int length[3] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	CountLine(arr, length);
	
	for (int i = 0; i < 3; i++)
	{
		cout << length[i] << "=" << arr[i] << endl;
	}
	return 0;
}
