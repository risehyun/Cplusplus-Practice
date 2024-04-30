#include <iostream>

using namespace std;

char arr[17] = {};
char flag[3] = {};

void Input()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> flag[i];
	}
}

int main()
{

	Input();

	for (int i = 0; i < 17; i++)
	{
		if (i <= 6)
		{
			arr[i] = flag[0];
		}
		else if (i > 6 && i <= 12)
		{
			arr[i] = flag[1];
		}
		else if (i > 12 && i <= 16)
		{
			arr[i] = flag[2];
		}
	}

	for (int i = 16; i >= 0; i--)
	{
		cout << arr[i];
	}


	return 0;
}