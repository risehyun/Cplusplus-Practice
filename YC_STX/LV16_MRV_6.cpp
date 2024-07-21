#include <iostream>

using namespace std;
int main()
{
	string str = "";

	cin >> str;

	int bucket[256] = {};

	int strLength = str.length();

	for (int i = 0; i < strLength; i++)
	{
		bucket[str[i]]++;
	}

	for (int i = 1; i < 256; i++)
	{
		if (bucket[i] >= 2)
		{
			cout << (char)i;
		}
	}

	return 0;
}