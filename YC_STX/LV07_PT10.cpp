#include <iostream>

using namespace std;

char temp = ' ';
char arr[4][4] = {
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 }
};

void Input()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = temp;
		}
	}
}

void Output()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}

		cout << endl;
	}
}

int main()
{

	cin >> temp;

	Input();
	Output();

	return 0;
}