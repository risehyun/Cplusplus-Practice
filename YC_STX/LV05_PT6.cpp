#include <iostream>

using namespace std;

void KFC()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "#";
	}

	cout << endl;
}

void MC()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "@";
	}

	cout << endl;
}

int main()
{
	KFC();
	MC();

	return 0;
}