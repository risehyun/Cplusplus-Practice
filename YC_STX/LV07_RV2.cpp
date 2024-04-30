#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { 0 };
	int index[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> index[i];

		int flag = index[i];

		arr[flag] = 1;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}