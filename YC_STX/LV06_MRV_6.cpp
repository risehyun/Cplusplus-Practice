#include <iostream>

using namespace std;
int main()
{
	int arr[4][3] =
	{
		{ 1, 5, 3 },
		{ 4, 5, 5 },
		{ 3, 3, 5 },
		{ 4, 6, 2 }
	};

	int a = 0, b = 0;

	cin >> a >> b;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= a && arr[y][x] <= b)
			{
				arr[y][x] = 0;
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == 0)
			{
				cout << "# ";
			}
			else
			{
				cout << arr[y][x] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}