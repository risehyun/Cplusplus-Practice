#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {};

	char input = ' ';

	cin >> input;

	int num = 6;

	if (input >= '0' && input <= '9')
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = y; x < 3; x++)
			{
				arr[y][x] = num;
				num--;
			}
		}
	}
	else if (input >= 'A' && input <= 'Z')
	{
		num = 1;
		for (int y = 2; y >= 0; y--)
		{
			for (int x = 0; x <= y; x++)
			{
				arr[y][x] = num;
				num++;
			}
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == 0)
			{
				cout << " ";
			}
			else
			{
				cout << arr[y][x];
			}
		}

		cout << endl;
	
	}


	return 0;
}