#include <iostream>

using namespace std;

char arr[9] = { "MINQUEST" };

int Length(char input)
{
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == input)
		{
			return i;
		}
	}
}

int main()
{
	char input = ' ';

	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		int length = Length(input);
		cout << input << "=" << length << endl;
	}

	return 0;
}