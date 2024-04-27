#include <iostream>

using namespace std;
int main()
{
	int input = 0, result = 0;
	
	int arr[5] = { 0 };

	cin >> input;

	result = input + 5;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = result;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}