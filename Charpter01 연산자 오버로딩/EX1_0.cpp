#include <iostream>

using namespace std;
int main()
{
	string str = "";
	int maxValue = -1;
	char maxChar = ' ';
	int bucket[256] = { };
	int count = 0;

	cin >> str;

	int strLength = str.length();

	for (int i = 0; i < strLength; i++)
	{
		if (str[i] >= 97)
		{
			bucket[str[i] - 32]++;
		}
		else
		{
			bucket[str[i]]++;
		}
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] > maxValue)
		{
			maxValue = bucket[i];
			maxChar = (char)i;
		}
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] == maxValue)
		{
			count++;
		}
	}

	if (count > 1)
	{
		cout << "?";
	}
	else
	{
		cout << maxChar;
	}

	return 0;
}