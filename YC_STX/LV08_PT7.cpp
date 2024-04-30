#include <iostream>

using namespace std;

char index = ' ';
char arr1[5] = { 'B', 'D', '5', 'Q', 'A' };
char arr2[5] = { 'Q', 'E', 'R', 'E', 'F' };

void Input()
{
	cin >> index;
}

void Output()
{
	if (index >= 'a' && index <= 'z')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr1[i];
		}
	}
	else if (index >= 'A' && index <= 'Z')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr2[i];
		}
	}
	else if (index <= '0' && index >= '9')
	{
		for (char i = 'H'; i >= 'A'; i--)
		{
			cout << i;
		}
	}
}
int main()
{
	Input();
	Output();

	return 0;
}