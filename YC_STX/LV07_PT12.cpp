#include <iostream>

using namespace std;

int input = 0;

void BBQ()
{
	if (0 < input && input < 5)
	{
		cout << "�ʱⰪ";
	}
	else if (6 < input && input < 10)
	{
		cout << "�߰���";
	}
	else
	{
		cout << "�˼����°�";
	}
}

int main()
{
	cin >> input;

	if (input == 3 || input == 5 || input == 7)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << i;
		}
	}
	else if (input == 0 || input == 8)
	{
		for (int i = 10; i >= 1; i--)
		{
			cout << i;
		}
	}
	else
	{
		BBQ();
	}

}