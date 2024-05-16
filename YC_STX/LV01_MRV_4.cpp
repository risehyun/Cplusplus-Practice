#include <iostream>

using namespace std;
int main()
{
	int arr[6] = {};
	int div = 0;

	int index = 2;

	for (int i = 0; i <= 1; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i <= 3; i++)
	{
		arr[index] = arr[i] * arr[i + 1];
		index++;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}