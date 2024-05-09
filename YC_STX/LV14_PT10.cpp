#include <iostream>

using namespace std;
int main()
{
	char arr[2][5] = 
	{ 
		"", 
		"" 
	};

	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}

	char resultArr[12] = {};
	int length[2] = {};

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] != '\0')
			{
				length[y]++;
			}
		}
	}

	for (int i = 0; i < length[0]; i++)
	{
		resultArr[i] = arr[0][i];
	}

	for (int i = 0; i < length[1]; i++)
	{
		resultArr[i+length[0]] = arr[1][i];
	}

	cout << resultArr;


	return 0;
}