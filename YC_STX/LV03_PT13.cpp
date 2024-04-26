#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	int sum = a + b + c;

	if (sum > 10)
	{
		int div = a * b * c;

		cout << div;
	}
	else
	{
		cout << "0";
	}


	return 0;
}