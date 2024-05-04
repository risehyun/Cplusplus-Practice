#include <iostream>

using namespace std;
int main()
{
	char a = ' ', b = ' ', c = ' ';

	cin >> a >> b >> c;

	char* ap = &a;
	char* bp = &b;
	char* cp = &c;

	(*ap)++;
	(*bp)++;
	(*cp)++;

	cout << *ap << " " << *bp << " " << *cp;

	return 0;
}