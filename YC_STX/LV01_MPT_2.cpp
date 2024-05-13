#include <iostream>

using namespace std;
int main()
{
	char arr[6][3] = {};

	char Alphabet = 'A';
	
	for (int y = 5; y >= 0; y--)
	{
		for (int x = 2; x >= 0; x--)
		{
			arr[y][x] = Alphabet;
			Alphabet++;
		}
	}

	for (int y = 5; y >= 0; y--)
	{
		for (int x = 2; x >= 0; x--)
		{
			cout << arr[y][x];
		}

		cout << endl;
	}

	return 0;
}