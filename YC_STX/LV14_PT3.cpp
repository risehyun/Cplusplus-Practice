#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	char arr[3][3] = {};

	int y = 2; 
	int x = 2 - y;
	int index = 0;

	cin >> input;

	while (y >= 0)
	{
		while (x <= index)
		{
			arr[y][x] = input;

			input++;

			x++;
			
		}

		x = 0;
		y--;
		index++;
	}

	y = 0, x = 0;

	while (y < 3)
	{
		while (x < 3)
		{
			cout << arr[y][x];
			x++;
		}

		cout << endl;

		x = 0;
		y++;
	}


	return 0;
}