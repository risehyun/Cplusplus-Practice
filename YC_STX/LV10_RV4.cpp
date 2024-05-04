#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, y = 0;

	cin >> a >> b >> c;

	int arr[3][4] = {};

	for (int i = 0; i < 4; i++)
	{
		arr[y][i] = a;

		y++;

		arr[y][i] = b;

		y++;

		arr[y][i] = c;

		y = 0;

		a++;
		b++;
		c++;
	}




	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}

		cout << endl;
	}


	return 0;
}