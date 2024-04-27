#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 3, 9, 27, 81, 243 };
	int index = 0;

	cin >> index;

	int result = arr[index] - 100;

	cout << result;

	return 0;
}