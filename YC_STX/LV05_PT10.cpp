#include <iostream>

using namespace std;

int arr[4] = { 0 };

void INPUT()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
}

void OUTPUT()
{
	for (int i = 3; i >= 0; i--)
	{
		cout << arr[i];
	}
}


int main()
{
	INPUT();
	OUTPUT();

	return 0;
}