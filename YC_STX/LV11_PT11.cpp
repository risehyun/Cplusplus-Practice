#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {
		{ 1, 3, 6, 2 },
		{ 4, 2, 4, 5 },
		{ 6, 3, 7, 3 },
		{ 1, 5, 4, 6 }
	};

	int select[16] = {};

	int input = 0;
	
	int indexSelect = 0;

	cin >> input;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > input)
			{
				select[indexSelect] = arr[i][j];
				indexSelect++;
			}
		}
	}

	for (int i = 0; i < indexSelect; i++)
	{
		cout << select[i] << " ";
	}

	return 0;
}