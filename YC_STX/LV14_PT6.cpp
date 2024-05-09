#include <iostream>

using namespace std;
int main()
{
	char arr[3][9] = {
		{ "BBQWORLD" },
		{ "KFCAPPLE" },
		{ "LOT" }
	};

	char input = ' ';

	int count = 0;

	cin >> input;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (arr[y][x] == input)
			{
				count++;
			}
		}
	}

	cout << count;


	return 0;
}