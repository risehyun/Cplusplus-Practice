#include <iostream>

using namespace std;
int main()
{

	int arr[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 5; i >= 0; i--)
	{
		if (arr[i] != 7)
		{
			cout << arr[i] << " ";
		}
		else
		{
			cout << arr[i] << " ";
			break;
		}

	}

	return 0;
}