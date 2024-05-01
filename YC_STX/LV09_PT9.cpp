#include <iostream>

using namespace std;

char arr[2][3] = {
	{ 'A', 'B', 'C' },
	{ 'D', 'E', 'W' }
};

void findCh(char flag)
{
	int count = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == flag)
			{
				count++;
			}
		}
	}

	if (count > 0)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}
}

int main()
{
	char input = ' ';

	cin >> input;

	findCh(input);

	return 0;
}