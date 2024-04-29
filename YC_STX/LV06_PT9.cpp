#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	for (int x = 'A'; x <= input; x++)
	{
		cout << (char)(x);
	}

	return 0;
}