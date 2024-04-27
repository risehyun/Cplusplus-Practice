#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 0 };

	int input = 0;

	cin >> input;

	for (int i = 0; i < 6; i++)
	{
		arr[i] = input - i;
	}

	cout << arr[2];

	return 0;
}