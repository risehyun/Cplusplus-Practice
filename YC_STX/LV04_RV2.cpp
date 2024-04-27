#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	if (input != 3)
	{
		cout << "3이 아니다" << endl;
	}

	if (input != 5)
	{
		cout << "5가 아니다" << endl;
	}

	if (input > 1 && input < 10)
	{
		for (int i = 5; i > 0; i--)
		{
			cout << i << endl;
		}
	}

	return 0;
}