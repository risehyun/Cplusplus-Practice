#include <iostream>

using namespace std;
int main()
{
	char input = ' ';
	int tmpValue = 0;

	cin >> input;

	for (int i = (input - 3); i <= (input + 3); i++)
	{
		char aTarget = (char)(i + 1);
		char bTarget = (char)(i - 1);
		if (aTarget <= 'A')
		{
			if (aTarget == 'A')
			{
				cout << "!" << (char)(90) << "!";
			}
			else
			{
				tmpValue++;
				cout << "!" << (char)(90 - tmpValue) << "!";
			}

		}
		else if (bTarget >= 'Z')
		{
			cout << "*" << (char)(65 + tmpValue) << "*";
			tmpValue++;
		}
		else
		{
			cout << (char)i;
		}
	}

	return 0;
}