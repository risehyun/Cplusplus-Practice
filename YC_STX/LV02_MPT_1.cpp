#include <iostream>

using namespace std;

char printChar(char str[3][4], char input, int yOffset, int xOffset)
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (str[y][x] == input)
			{
				return str[y + yOffset][x + xOffset];
			}
		}
	}
}

int main()
{
	char str[3][4] = 
	{
		{ 'A', 'T', 'K', 'B' },
		{ 'C', 'Z', 'F', 'D' },
		{ 'H', 'G', 'E', 'I' }
	};

	char input = ' ';

	int yOffset = 0, xOffset = 0;

	cin >> input >> yOffset >> xOffset;

	char result = printChar(str, input, yOffset, xOffset);

	cout << result;

	return 0;
}