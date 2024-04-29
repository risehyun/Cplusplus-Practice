#include <iostream>

using namespace std;
int main()
{
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << " " << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " " << endl;
	}


	return 0;
}