#include <iostream>

using namespace std;
int main()
{
	int arr[4] = { 0 };
	int sum = 0;

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}

	cout << sum;


	return 0;
}