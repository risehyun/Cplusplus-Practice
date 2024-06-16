#include <iostream>

using namespace std;

char arr[2][2][3] =
{
	{
		{ 'A', 'T', 'B' },
		{ 'C', 'C', 'B' }
	},

	{
		{ 'A', 'A', 'A' },
		{ 'B', 'B', 'C' }
	}
};


int find(char* input)
{
	for (int z = 0; z < 2; z++)
	{
		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (arr[z][y][x] == *input)
				{
					return 1;
				}
			}
		}
	}

	return 0;
}

int main()
{


	char input = ' ';

	cin >> input;

	int result = find(&input);

	if (result == 1)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}



	return 0;
}