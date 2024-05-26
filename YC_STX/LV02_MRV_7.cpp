#include <iostream>

using namespace std;

int sumMask(int* arr, int* mask)
{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		if (mask[i] == 1)
		{
			sum += arr[i];
		}
	}

	return sum;
}

int main()
{
	int arr[4] = { 3, 5, 4, 2 };

	int mask[4] = {};

	int result = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> mask[i];
	}

	result = sumMask(arr, mask);

	cout << result;

	return 0;
}