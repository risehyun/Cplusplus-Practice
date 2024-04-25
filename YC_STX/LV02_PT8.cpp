#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	if (a > b)
	{
		cout << a << a << a << a;
	}
	else if (a < b)
	{
		cout << b << b << b << b;
	}
	else
	{
		cout << "두 수가 같습니다.";
	}

	return 0;
}