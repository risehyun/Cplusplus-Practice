#include <iostream>

using namespace std;

void KFC()
{
	cout << "KFC�Դϴ�";
}

void MC()
{
	cout << "MC�Դϴ�";
}

int main()
{
	int index = 0;

	cin >> index;

	if (index == 1)
	{
		KFC();
	}
	else if (index == 2)
	{
		MC();
	}

	return 0;
}