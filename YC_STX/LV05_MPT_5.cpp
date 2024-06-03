#include <iostream>

using namespace std;

void Print(int index, char* arr)
{

	if (index > 4)
	{
		cout << endl;
		return;
	}

	cout << arr[index];

	Print(index + 1, arr);

	cout << arr[index];
}


int main()
{
	char arr[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	Print(0, arr);


	return 0;
}