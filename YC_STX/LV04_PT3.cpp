#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 0 };

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	int sum = arr[0] + arr[6];

	cout << sum;
	
	return 0;
}