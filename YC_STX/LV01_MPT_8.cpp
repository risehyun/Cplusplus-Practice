#include <iostream>

using namespace std;

int isExist(char str[2][3], char input)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if ((str[y][x]) == input)
			{
				return 1;
			}
		}
	}
	
	return 0;
}

int main()
{
	int sum = 0;

	char str[2][3] =
	{
		{ 'G', 'K', 'T' },
		{ 'P', 'A', 'C' }
	};

	char input[2] = {};

	for (int i = 0; i < 2; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 2; i++)
	{
		sum += isExist(str, input[i]);
	}

	if (sum == 2)
	{
		cout << "대발견";
	}
	else if (sum == 1)
	{
		cout << "중발견";
	}
	else if (sum == 0)
	{
		cout << "미발견";
	}


	return 0;
}