#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0;

	int result;

	cin >> a >> b;

	if (a > b)
	{
		result = a - b;
	}
	else
	{
		result = b - a;
	}

	if (result % 2 == 0)
	{
		cout << "Â¦»ç¶û¸¸";
	}
	else 
	{
		cout << "°í¹éÇÑ´Ù";
	}

	return 0;
}