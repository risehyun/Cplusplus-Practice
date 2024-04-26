#include <iostream>

using namespace std;

int main()
{
	int input = 0, result = 0;

	cin >> input;

	result = (input * 2) + 20 / 5;

	if (result != 100)
	{
		cout << "Magic";
	}

	return 0;
}