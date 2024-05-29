#include <iostream>

using namespace std;
int main()
{
	char input[11] = {};
	char bucket[256] = {};

	cin >> input;

	for (int i = 0; i < 11; i++)
	{
		bucket[input[i]]++;
	}

	for (int i = 1; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			cout << (char)i;
		}
	}

	return 0;
}