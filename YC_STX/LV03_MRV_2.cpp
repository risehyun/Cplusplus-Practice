#include <iostream>

using namespace std;

int isSame(int* arr)
{
	int bucket[10] = {};

	for (int i = 0; i < 6; i++)
	{
		bucket[arr[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] > 1)
		{
			return 1;
		}
	}

	return 0;

}

int main()
{
	int arr[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	int	result = isSame(arr);

	if (result == 1)
	{
		cout << "도플갱어 발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}