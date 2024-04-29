#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	for (int i = input; i >= 'a'; i--)
	{
		cout << (char)i;
	}

	return 0;
}