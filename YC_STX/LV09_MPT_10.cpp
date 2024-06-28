#include <iostream>

using namespace std;

char str[8] = "";
int index[4] = {};
char* ptrs[4] = {};

int main()
{
	cin >> str;

	for (int i = 0; i < 4; i++)
	{
		cin >> index[i];

		ptrs[i] = &str[index[i]];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << *ptrs[i];
	}

	return 0;
}