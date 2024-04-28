#include <iostream>

using namespace std;
int main()
{
	int arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int input = 0;

	cin >> input;

	for (int i = 0; i < 11; i += input)
	{
		cout << arr[i] << " ";
	}

	return 0;
}