#include <iostream>

using namespace std;
int main()
{
	int arr[11] = { 3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9 };

	int input = 0;

	cin >> input;

	for (int i = 0; i < 11; i += input)
	{
		cout << arr[i] << " ";
	}

	return 0;
}