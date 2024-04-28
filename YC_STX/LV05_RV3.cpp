#include <iostream>

using namespace std;

int arr1[5] = { 0 };
int arr2[5] = { 0 };

void PrintAll()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i];
	}
}

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = a;
		arr2[i] = b;
	}

	PrintAll();


	return 0;
}