#include <iostream>

using namespace std;
int main()
{
	int a = 0;
	char gd = ' ';

	cin >> a >> gd;

	int* p = &a;
	char* t = &gd;

	cout << *p << " " << *t;

	return 0;
}