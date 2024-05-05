#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] = {
		{ 3, 1, 6 },
		{ 7, 8, 4 },
		{ 9, 2, 3 }
	};

	int a = 0, b = 0, c = 0, sum = 0;
	int max = 0;
	int min = 10;

	cin >> a >> b >> c;

	arr[a][b] = c;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (max <= arr[i][j])
			{
				max = arr[i][j];
			}
			else if (min >= arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}

	sum = max + min;

	cout << sum;

}