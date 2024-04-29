#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	cout << (char)(input - 'a' + 'A');

	return 0;
}