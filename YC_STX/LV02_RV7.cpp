#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0;

	cin >> a >> b >> c >> d;

	int avg = (a + b + c + d) / 4;

	if (a < avg)
	{
		cout << a << "<" << avg << endl;
	}
	else if (a == avg)
	{
		cout << a << "==" << avg << endl;
	}
	else if (a > avg)
	{
		cout << a << ">" << avg << endl;
	}

	if (b < avg)
	{
		cout << b << "<" << avg << endl;
	}
	else if (b == avg)
	{
		cout << b << "==" << avg << endl;
	}
	else if (b > avg)
	{
		cout << b << ">" << avg << endl;
	}

	if (c < avg)
	{
		cout << c << "<" << avg << endl;
	}
	else if (c == avg)
	{
		cout << c << "==" << avg << endl;
	}
	else if (c > avg)
	{
		cout << c << ">" << avg << endl;
	}

	if (d < avg)
	{
		cout << d << "<" << avg << endl;
	}
	else if (d == avg)
	{
		cout << d << "==" << avg << endl;
	}
	else if (d > avg)
	{
		cout << d << ">" << avg << endl;
	}

	return 0;
}