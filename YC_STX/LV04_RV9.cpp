#include <iostream>

using namespace std;

int main()
{
	int arr[4] = { 0 };

	cin >> arr[0] >> arr[2];

	for (int i = 0; i < 4; i++)
	{
		cout << arr[i];
	}

	return 0;
}