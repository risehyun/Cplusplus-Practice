#include <iostream>

using namespace std;
int main()
{
	int input = 0;
	int result[5] = {};

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		result[i] = (input % 10) / 10;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << result[i];
	}

	return 0;
}