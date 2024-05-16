#include <iostream>

using namespace std;
int main()
{
	char arr[6][3] = {};

	char Alphabet = 'A';

	int y = 0, x = 0;

	cin >> y >> x;

	for (int x = 2; x >= 0; x--)
	{
		for (int y = 5; y >= 0; y--)
		{
			arr[y][x] = Alphabet;
			Alphabet++;
		}
	}

	cout << arr[y][x];

	return 0;
}