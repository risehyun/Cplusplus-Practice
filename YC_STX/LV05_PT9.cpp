#include <iostream>

using namespace std;

char arr[3] = { 'A', 'B', 'C' };

void KFC()
{
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i];
	}

	cout << endl;
	
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		KFC();
	}

	return 0;
}