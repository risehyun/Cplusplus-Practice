#include <iostream>

using namespace std;

int Length(char str[11])
{
	for (int i = 0; i < 11; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	char str[11] = "";

	cin >> str;

	char input[3] = {};
	int count[3] = {};

	int length = Length(str);

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < length; i++)
	{
		if (str[i] == input[0])
		{
			count[0]++;
		}
		else if (str[i] == input[1])
		{
			count[1]++;
		}
		else if (str[i] == input[2])
		{
			count[2]++;
		}
	}

	cout << str[0] << "=" << count[0] << endl;
	cout << str[1] << "=" << count[1] << endl;
	cout << str[2] << "=" << count[2] << endl;

	return 0;
}