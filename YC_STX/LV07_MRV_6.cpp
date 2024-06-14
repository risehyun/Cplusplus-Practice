#include <iostream>

using namespace std;
int main()
{
	int aLength = 0;
	int bLength = 0;

	char str[4][11] = 
	{ 
		"",
		"",
		"",
		""
	};

	char tmp[11] = "";

	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			aLength = strlen(str[i]);
			bLength = strlen(str[j]);

			if (aLength > bLength)
			{
				strcpy_s(tmp, str[i]);

				strcpy_s(str[i], str[j]);

				strcpy_s(str[j], tmp);

			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << str[i] << endl;
	}

	return 0;
}