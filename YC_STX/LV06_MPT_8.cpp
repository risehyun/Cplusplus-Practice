#include <iostream>

using namespace std;
int main()
{
	int y = 5, x = 5;

	int commandCount = 0;

	cin >> commandCount;

	for (int i = 0; i < commandCount; i++)
	{
		char str[10] = "";

		cin >> str;

		if (0 == strcmp(str, "up"))
		{
			y--;
		}
		else if (0 == strcmp(str, "down"))
		{
			y++;
		}
		else if (0 == strcmp(str, "left"))
		{
			x--;
		}
		else if (0 == strcmp(str, "right"))
		{
			x++;
		}
		else if (0 == strcmp(str, "click"))
		{
			cout << "(" << y << "," << x << ")" << endl;
		}

	}



	return 0;
}