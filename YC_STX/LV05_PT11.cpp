#include <iostream>

using namespace std;


int arr[6] = { 0 };

void PrintAll()
{
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < 6; i++)
	{
		if (i > 0)
		{
			arr[i] = input + i;
		}
		else
		{
			arr[i] = input;
		}

	}

	PrintAll();

	return 0;
}