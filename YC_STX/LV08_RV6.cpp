#include <iostream>

using namespace std;
int main()
{
	char inputChar = ' ';
	int  inputInt = 0;

	cin >> inputChar >> inputInt;

	for (int i = 0; i < inputInt; i++)
	{
		for (int j = 0; j < inputInt; j++)
		{
			cout << inputChar;
		}

		cout << endl;
	}

	return 0;
}