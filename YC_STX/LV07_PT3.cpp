#include <iostream>

using namespace std;
int main()
{
	int arr[3][2] = {
		{ 3, 1 },
		{ 1, 2 },
		{ 3, 2 }
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j];
		}
	}

	return 0;
}