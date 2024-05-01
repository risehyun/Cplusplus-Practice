#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 3, 4, 2, 5, 7, 9 };

	int a = 0, b = 0, temp = 0;

	cin >> a >> b;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}