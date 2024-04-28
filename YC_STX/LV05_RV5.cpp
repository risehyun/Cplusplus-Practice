#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	char input = ' ';

	cin >> input;

	if (input == 'a' || input == 'b' || input == 'c')
	{
		for (int i = 3; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}

		int a = 0;
	}
	else
	{
		for (int i = 4; i >= 1; i--)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}