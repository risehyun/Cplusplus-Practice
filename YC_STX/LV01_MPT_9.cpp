#include <iostream>

using namespace std;

void sum(int* arr)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i + 1] = arr[i] + arr[i+1];
	}
}

int main()
{
	int arr[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}


	sum(arr);


	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}