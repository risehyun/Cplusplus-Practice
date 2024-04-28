#include <iostream>

using namespace std;

void KFC()
{
	cout << "KFC입니다";
}

void MC()
{
	cout << "MC입니다";
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