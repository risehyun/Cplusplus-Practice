#include <iostream>

using namespace std;
int main()
{
	char str[4][5] =
	{
		"",
		"",
		"",
		""
	};

	int flagA = 0, flagB = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (str[y][x] == 'A')
			{
				flagA = 1;
			}
			else if (str[y][x] == 'B')
			{
				flagB = 1;
			}
		}
	}

	if (flagA == 1 && flagB == 1)
	{
		cout << "대발견";
	}
	else if ((flagA == 1 && flagB == 0)
		|| (flagA == 0 && flagB == 1))
	{
		cout << "중발견";
	}
	else if (flagA == 0 && flagB == 0)
	{
		cout << "미발견";
	}

	return 0;
}