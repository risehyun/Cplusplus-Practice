#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	int arr[6] = { 0 };

	if (input == 3)
	{
		for (int i = 1; i < 7; i++)
		{
			arr[i-1] = i * 3;

			cout << arr[i-1] << " ";
		}
	}

	return 0;
}