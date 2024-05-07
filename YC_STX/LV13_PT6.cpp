#include <iostream>

using namespace std;

int main()
{
	char arr[2][6] = {
	{ '4', '5', '7', '1', '3', '2' },
	{ 'D', 'F', 'Q', 'W', 'G', 'Z' }
	};

	char input = 0;

	cin >> input;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (arr[y][x] == input)
			{
				cout << arr[y + 1][x];
			}
		}
	}


	return 0;
}