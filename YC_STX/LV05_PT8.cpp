#include <iostream>

using namespace std;
int input = 0;

void KFC()
{
	cin >> input;
}

void BBQ()
{
	if (input > 5)
	{
		cout << "만세";
	}
	else
	{
		cout << "다시";
	}
}

int main()
{
	KFC();
	BBQ();

	return 0;
}
