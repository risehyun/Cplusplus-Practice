#include <iostream>

using namespace std;
int main()
{
	int arr[7] = {};

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j <= 7 - i; j++)
		{
			cout << arr[j] << " ";
		}
		cout << endl;
	}

	return 0;
}