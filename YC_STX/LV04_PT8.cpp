#include <iostream>

using namespace std;

int main()
{
	int input = 0;

	cin >> input;

	if (input > 5)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << i << endl;
		}
	}
	else
	{
		for (int i = 5; i > 0; i--)
		{
			cout << i << endl;
		}
	}

	return 0;
}