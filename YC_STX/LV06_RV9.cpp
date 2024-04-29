#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { 5, 4, 1, 2, 7, 8 };
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 5; j >= 0; j--)
		{
			cout << arr[j] << " ";
		}

		cout << endl;
	}
	return 0;
}