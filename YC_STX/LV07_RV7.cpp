#include <iostream>

using namespace std;
int main()
{

	int arr[3][2] = {};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];

			arr[i][j] += 2;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}