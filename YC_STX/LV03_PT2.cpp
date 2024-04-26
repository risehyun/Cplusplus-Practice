#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;

	cin >> x >> y;

	if (x > y)
	{
		cout << "큰수는 " << x;
	}
	else if (x < y)
	{
		cout << "큰수는 " << y;
	}
	else if (x == y)
	{
		cout << "같은숫자";
	}

	return 0;
}