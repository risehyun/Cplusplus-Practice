#include <iostream>

using namespace std;

int main()
{

	int arr[5] = { 0 };

	int input = 0;

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}



	return 0;
}