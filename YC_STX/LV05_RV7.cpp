#include <iostream>

using namespace std;

int main()
{
	int data[4] = { 0 };

	int input = 0;

	cin >> input;

	for (int i = 0; i < 4; i++)
	{
		data[i] = input - i;
		cout << data[i] << " ";
	}

	return 0;
}