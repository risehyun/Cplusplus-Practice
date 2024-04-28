#include <iostream>

using namespace std;

void KFC()
{
	cout << "KFC" << endl;
}

void BBQ()
{
	cout << "BBQ" << endl;
}


int main()
{
	char input = ' ';

	cin >> input;

	if (input == 'B')
	{
		KFC();
		BBQ();
	}
	else if (input == 'b')
	{
		BBQ();
	}
	else if (input == '7')
	{
		KFC();
	}

	return 0;
}