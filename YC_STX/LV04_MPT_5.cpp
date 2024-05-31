#include <iostream>

using namespace std;
int main()
{
	int input[4][2] = {};
	int vect[4][3] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> input[y][x];
		}

		vect[input[y][0]][input[y][1]] = 5;
	}


	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}


	return 0;
}