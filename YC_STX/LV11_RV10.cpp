#include <iostream>

using namespace std;
int main()
{
	int arr1[2][3] = {};
	int arr2[6] = {};

	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cin >> arr1[i][j];
		}
	}

	int index = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[index] = arr1[i][j];
			index++;
		}
	}

	int temp = 0;

	temp = arr2[0];
	arr2[0] = arr2[5];
	arr2[5] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << " ";
	}

}