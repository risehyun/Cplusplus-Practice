#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 3, 9, 12, 15, 55 };
	int input[3] = { 0 };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
		sum += input[i];
	}

	if (sum > 10)
	{
		cout << arr[4];
	}
	else
	{
		cout << arr[0];
	}

	return 0;
}