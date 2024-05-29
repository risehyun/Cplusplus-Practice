#include <iostream>

int findChar(char* vect, char input)
{
	for (int i = 0; i < 7; i++)
	{
		if (vect[i] == input)
		{
			return 1;
		}
	}
	return 0;
}

using namespace std;
int main()
{
	char vect[7] = "CODING";

	int targetNumber = 0;

	cin >> targetNumber;

	char input[7] = {};

	for (int i = 0; i < targetNumber; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < targetNumber; i++)
	{
		int result = findChar(vect, input[i]);

		if (result == 1)
		{
			cout << 'O';
		}
		else
		{
			cout << 'X';
		}
	}

	return 0;
}