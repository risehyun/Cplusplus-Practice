#include <iostream>

using namespace std;

int findMinimal(int* arr, int* mask)
{
	int minValue = 0;
	int minIndex = 0;

	minValue = arr[0];

	for (int i = 0; i < 6; i++)
	{
		if (mask[i] == 1 && minValue > arr[i])
		{
			minValue = arr[i];
			minIndex = i;
		}
	}

	return minIndex;
}


int main()
{
	int arr[6] = {};
	int mask[6] = { 1, 0, 1, 0, 1, 0 };
	int result = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	result = findMinimal(arr, mask);

	cout << "arr[" << result << "]=" << arr[result];

	return 0;
}