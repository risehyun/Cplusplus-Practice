#include <iostream>

using namespace std;
int main()
{
	char arr[5] = {};

	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}

	return 0;
}