#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, max = 0, min = 0;

	cin >> a >> b >> c;

	max = a;
	min = a;

	if (b >= max && b >= c)
	{
		max = b;
	}
	else if (c >= max && c >= b)
	{
		max = c;
	}

	if (b <= min && b <= c)
	{
		min = b;
	}
	else if (c <= min && c <= b)
	{
		min = c;
	}

	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}