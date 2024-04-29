#include <iostream>

using namespace std;
int main()
{
	char arr1[5] = { ' ' };
	char arr2[5] = { ' ' };

	char input = ' ';

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = input + i;
		arr2[i] = input - i;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i];
	}



	return 0;
}