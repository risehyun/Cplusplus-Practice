#include <iostream>

using namespace std;

char arr[2] = { ' ' };

void Input()
{
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	if (arr[0] >= 'A' && arr[1] <= 'A' || arr[0] <= 'A' && arr[1] >= 'A')
	{
		cout << "대소문자";
	}
	else if (arr[0] >= 'A' && arr[1] >= 'A')
	{
		cout << "대문자들";
	}
	else
	{
		for (char i = 'a'; i <= 'z'; i++)
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