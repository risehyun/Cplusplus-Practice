#include <iostream>

using namespace std;
int main()
{
	int arr[4] = { 3, 1, 2, 5 };

	int input = 0;

	cin >> input;

	if (arr[input] > 2)
	{
		cout << "���";
	}
	else
	{
		cout << "�Ф�";
	}

	return 0;
}