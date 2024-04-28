#include <iostream>

using namespace std;


int arr[5] = { 0 };

void KFC()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = input - i;
	}

	KFC();

	return 0;
}