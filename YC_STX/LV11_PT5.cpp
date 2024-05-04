#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	int* p = &a;
	int* t = &b;

	int temp = 0;

	temp = *p;
	*p = *t;
	*t = temp;

	cout << *p << " " << *t;


	return 0;
}