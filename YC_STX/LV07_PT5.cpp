#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	if (input >= 80)
	{
		cout << "수";
	}
	else if (input < 80 && input >= 70)
	{
		cout << "우";
	}
	else if (input < 70 && input >= 60)
	{
		cout << "미";
	}
	else
	{
		cout << "재시도";
	}

	return 0;
}