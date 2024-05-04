#include <iostream>

using namespace std;

int INPUT()
{
	int input = 0;

	cin >> input;

	return input;
}

void CountDown(int _input)
{
	for (int i = _input; i >= 1; i--)
	{
		cout << i << " ";
	}
}


int main()
{
	int input = INPUT();

	CountDown(input);

	return 0;
}