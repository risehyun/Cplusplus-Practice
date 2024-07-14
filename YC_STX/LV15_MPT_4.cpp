#include <iostream>

using namespace std;

char bucket[256] = {};

int main()
{
	string str = "";

	cin >> str;

	int strLength = str.length();
	int charCount = 0;

	for (int i = 0; i < strLength; i++)
	{
		bucket[str[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			charCount++;
		}
	}

	cout << charCount << "Á¾·ù";

	return 0;
}