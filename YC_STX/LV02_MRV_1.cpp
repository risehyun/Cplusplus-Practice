#include <iostream>

using namespace std;
int main()
{
	int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };
	int bit[7] = {};

	for (int i = 0; i < 7; i++)
	{
		cin >> bit[i];

		if (bit[i] == 0)
		{
			vect[i] = 0;
		}

		if (vect[i] != 0)
		{
			vect[i] = 7;
		}

		cout << vect[i] << " ";
	}

	return 0;
}