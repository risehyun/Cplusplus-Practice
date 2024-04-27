#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 5, 25, 54, 2, -33, 57, 82, -8, 13, 1 };

	int index = 0;

	cin >> index;

	for (int i = index; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}