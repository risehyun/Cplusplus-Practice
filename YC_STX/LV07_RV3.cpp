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
		cout << "��ҹ���";
	}
	else if (arr[0] >= 'A' && arr[1] >= 'A')
	{
		cout << "�빮�ڵ�";
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