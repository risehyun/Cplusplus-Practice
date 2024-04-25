#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0, z = 0;

	cin >> x >> y >> z;

	if ((x + y + z) >= (x * y * z))
	{
		cout << "青款狼 荐";
	}
	else
	{
		cout << "家家茄 荐";
	}

	return 0;
}