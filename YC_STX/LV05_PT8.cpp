#include <iostream>

using namespace std;
int input = 0;

void KFC()
{
	cin >> input;
}

void BBQ()
{
	if (input > 5)
	{
		cout << "����";
	}
	else
	{
		cout << "�ٽ�";
	}
}

int main()
{
	KFC();
	BBQ();

	return 0;
}
