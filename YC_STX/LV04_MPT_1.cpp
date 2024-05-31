#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] =
	{
		{ 3, 5, 4 },
		{ 1, 1, 2 },
		{ 1, 3, 9 }
	};

	int direct[4][2] =
	{
		{ -1, 0 }, // ╩С
		{ 1, 0 },  // го
		{ 0 , -1 },// аб
		{ 0, 1 }   // ©Л
	};

	int y = 0, x = 0, sum = 0;

	cin >> x >> y;

	for (int i = 0; i < 4; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (newX >= 0 && newX <= 2 && newY >= 0 && newY <= 2)
		{
			sum += arr[newY][newX];
		}
	}

	cout << sum;

	return 0;
}