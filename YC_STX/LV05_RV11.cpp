#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	int input = 0;

	cin >> input;

	for (int i = 3; i < 6; i++)
	{
		arr[i] = input;
		input++;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}