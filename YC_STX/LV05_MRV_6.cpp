#include <iostream>

using namespace std;
int main()
{
	int arr[7] = {};

	for (int i = 0; i < 7; i++)
	{
		cin >> i;
	}

	for (int i = 4; i > 0; i--)
	{
		for (int j = i - 1; j < 7; j++)
		{
			cout << arr[j] << " ";
		}
		cout << endl;
	}



	return 0;
}