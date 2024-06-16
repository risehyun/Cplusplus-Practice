#include <iostream>

using namespace std;

int main()
{
	char str[3][11] =
	{
		"",
		"",
		""
	};

	int flag = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}

	if (0 == strcmp(str[0], str[1]))
	{
		flag++;
	}

	if (0 == strcmp(str[1], str[2]))
	{
		flag++;
	}

	if (0 == strcmp(str[2], str[0]))
	{
		flag++;
	}

	if (flag == 0)
	{
		cout << "BAD";
	}
	else if (flag == 1 || flag == 2)
	{
		cout << "GOOD";
	}
	else if (flag == 3)
	{
		cout << "WOW";
	}

	return 0;
}