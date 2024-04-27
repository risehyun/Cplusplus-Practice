#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 0 };
	int input = 0;

	cin >> input;

	for (int i = 0; i <= 5; i++)
	{
		arr[i] = input + i;
		cout << arr[i] << endl;
	}

	return 0;
}