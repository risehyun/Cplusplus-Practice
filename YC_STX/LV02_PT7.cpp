#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;
	
	if (a > b)
	{
		cout << "a가 b보다 크다";
	}
	else
	{
		cout << "b가 a보다 같거나 크다";
	}

	return 0;
}