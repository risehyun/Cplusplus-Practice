#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] = { };

	int x = 0, y = 0, input = 0;
	cin >> y >> x >> input;

	arr[y][x] = input;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}

		cout << endl;
	}

	return 0;
}