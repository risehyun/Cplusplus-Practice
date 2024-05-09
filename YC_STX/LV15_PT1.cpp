#include <iostream>

using namespace std;
int main()
{
	int vect[7] = { 3, 5, 1, 1, 2, 3, 2 };

	int input[4] = {};
	int count[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (input[y] == vect[x])
			{
				count[y]++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << input[i] << "=" << count[i] << "°³" << endl;
	}

	return 0;
}