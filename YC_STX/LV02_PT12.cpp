#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0, z = 0;

	cin >> x >> y >> z;

	if ((x + y + z) >= (x * y * z))
	{
		cout << "행운의 수";
	}
	else
	{
		cout << "소소한 수";
	}

	return 0;
}