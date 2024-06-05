#include <iostream>

using namespace std;
int main()
{
	char str[11] = "";

	cin >> str;

	for (int y = 6; y >= 0; y--)
	{
		for (int x = y; x < 11; x++)
		{
			cout << str[x];
		}

		cout << endl;
	}

	return 0;
}