#include <iostream>

using namespace std;
int main()
{
	char input = ' ';
	int result = 0;

	cin >> input;

	if (input >= '0' && input <= '9')
	{
		result = input - '0' + 5;
	}

	cout << result;


	return 0;
}