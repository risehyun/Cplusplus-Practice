#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	if (input >= 80)
	{
		cout << "��";
	}
	else if (input < 80 && input >= 70)
	{
		cout << "��";
	}
	else if (input < 70 && input >= 60)
	{
		cout << "��";
	}
	else
	{
		cout << "��õ�";
	}

	return 0;
}