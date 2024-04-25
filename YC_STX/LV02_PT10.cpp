#include <iostream>

using namespace std;

int main()
{
	int input = 0;

	cin >> input;

	if (input > 3)
	{
		input++;
		cout << input;
	}
	else
	{
		input--;
		cout << input;
	}

	return 0;
}