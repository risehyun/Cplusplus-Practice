#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;

	cin >> x >> y;

	if (x > y)
	{
		cout << "ū���� " << x;
	}
	else if (x < y)
	{
		cout << "ū���� " << y;
	}
	else if (x == y)
	{
		cout << "��������";
	}

	return 0;
}