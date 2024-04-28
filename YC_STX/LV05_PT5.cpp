#include <iostream>

using namespace std;


void LOT()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << i;
	}

	cout << endl;
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		LOT();
	}

	return 0;
}