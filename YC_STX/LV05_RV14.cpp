#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { 0 };

	int a = 0, b = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		arr[i] = i;
		cout << arr[i];
	}

	return 0;
}