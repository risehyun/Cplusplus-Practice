#include <iostream>

using namespace std;

char getChar()
{
	char input1 = ' ', input2 = ' ';

	cin >> input1 >> input2;

	if (input1 >= input2)
	{
		return input1;
	}
	else
	{
		return input2;
	}
}

int main()
{
	char result = ' ';
	
	result = getChar();
	cout << result;

	return 0;
}