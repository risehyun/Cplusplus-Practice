#include <iostream>

using namespace std;

char aToz()
{
	char input = ' ';

	cin >> input;

	if (input <= 'M')
	{
		return 'A';
	}
	else
	{
		return 'Z';
	}
}


int main()
{
	char result = aToz();

	cout << result;

	return 0;
}