#include <iostream>

using namespace std;
int main()
{
	char str[6] = {};
	char result[6] = {};
	int input = 0;

	cin >> str >> input;

	for (int i = 0; i < input; i++)
	{
		result[i] = str[i];
	}

	result[input] = 'A';

	for (int i = input + 1; i <= (6 - input); i++)
	{
		result[i] = str[i-1];
	}

	cout << result;

	return 0;
}