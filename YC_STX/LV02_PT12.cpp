#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0, z = 0;

	cin >> x >> y >> z;

	if ((x + y + z) >= (x * y * z))
	{
		cout << "����� ��";
	}
	else
	{
		cout << "�Ҽ��� ��";
	}

	return 0;
}