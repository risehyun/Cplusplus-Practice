#include <iostream>

using namespace std;

int arr[8] = {};

int main()
{

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	int pivot = arr[0];

	int maxValue = 0;
	int minValue = 0;
	int maxIndex = 0;
	int minIndex = 0;


	for (int i = 0; i < 8; i++)
	{
		for (int i = 1; i < 8; i++)
		{
			if (arr[i] > pivot)
			{
				maxIndex = i;
				maxValue = arr[i];
				break;
			}
		}

		for (int i = 7; i >= 0; i--)
		{
			if (arr[i] < pivot)
			{
				minIndex = i;
				minValue = arr[i];
				break;
			}
		}

		int tmp = maxValue;
		arr[maxIndex] = minValue;
		arr[minIndex] = tmp;
	}

	int tmp = pivot;
	arr[0] = arr[3];
	arr[3] = tmp;


	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}