#include <iostream>

using namespace std;

void BBQ(int _index)
{
	for (int i = 1; i <= _index; i++)
	{
		cout << i;
	}
}

void KFC(char _input)
{
	for (int i = 0; i < 7; i++)
	{
		cout << _input;
	}
}

int main()
{
	int input = 0, inputNum = 0;
	char inputChar = ' ';

	cin >> input;

	if (input % 2 == 1)
	{
		cin >> inputNum;

		BBQ(inputNum);
	}
	else
	{
		cin >> inputChar;

		KFC(inputChar);
	}

	return 0;
}