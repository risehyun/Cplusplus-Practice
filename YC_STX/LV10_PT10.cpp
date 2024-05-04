#include <iostream>

using namespace std;

int yesOrNo()
{
	int input = 0;

	cin >> input;

	if (input % 3 == 0)
	{
		return 7;
	}
	else if (input % 3 == 1)
	{
		return 35;
	}
	else if (input % 3 == 2)
	{
		return 50;
	}
}

int main()
{
	int result = yesOrNo();
	cout << result;

	return 0;
}