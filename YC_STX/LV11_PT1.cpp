#include <iostream>

using namespace std;

int input()
{
	int input = 0;

	cin >> input;

	return input;
}

void cals(int _a, int _b, int _c)
{
	int sum = 0;

	sum = _a + _b + _c;

	cout << sum;
}

int main()
{
	int a = 0, b = 0, c = 0;

	a = input();
	b = input();
	c = input();

	cals(a, b, c);

	return 0;
}