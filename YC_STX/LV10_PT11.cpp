#include <iostream>

using namespace std;

char scoring()
{
	int input = 0;

	cin >> input;

	if (input >= 90)
	{
		return 'A';
	}
	else if (90 > input && input >= 80)
	{
		return 'B';
	}
	else if (80 > input && input >= 70)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

int main()
{
	char result = scoring();

	cout << result;

	return 0;
}