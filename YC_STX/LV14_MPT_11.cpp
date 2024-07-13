#include <iostream>

using namespace std;
int main()
{
	string text = "";
	char cmd = ' ';

	cin >> text;
	int textLength = text.length();

	int cursorPosition = 0;

	cin >> cursorPosition;

	for (int i = 0; i < 4; i++)
	{
		cin >> cmd;

		if (cmd == 'L')
		{
			if (cursorPosition != 0)
			{
				cursorPosition--;
			}
		}
		else if (cmd == 'R')
		{
			if (cursorPosition != textLength)
			{
				cursorPosition++;
			}
		}
		else if (cmd == 'D')
		{
			for (int i = cursorPosition + 1; i <= textLength; i++)
			{
				text[i - 1] = text[i];
			}

			textLength--;
		}
	}

	cout << cursorPosition;

	return 0;
}