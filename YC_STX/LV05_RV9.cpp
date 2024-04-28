#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	int arr[5] = { 0 };

	arr[0] = a;

	for (int i = 1; i < 5; i++)
	{
		arr[i] = arr[i-1] + b;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}