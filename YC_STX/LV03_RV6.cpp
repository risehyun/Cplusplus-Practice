#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	int div = a * b;

	if (30 < div && div < 50)
	{
		cout << "������ ������";
	}
	else if (div >= 50)
	{
		cout << "ū ������";
	}
	else if (div <= 30)
	{
		cout << "���� ������";
	}

	return 0;
}