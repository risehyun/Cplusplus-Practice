#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	int div = a * b;

	if (30 < div && div < 50)
	{
		cout << "적당한 사이즈";
	}
	else if (div >= 50)
	{
		cout << "큰 사이즈";
	}
	else if (div <= 30)
	{
		cout << "작은 사이즈";
	}

	return 0;
}