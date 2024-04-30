#include <iostream>

using namespace std;

int arr[3][4] = {};

void Input()
{
	int index = 0;
	cin >> index;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = index;
			index++;
		}
	}
}

void Process()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] += 1;
		}
	}
}

void Output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	Input();
	Process();
	Output();

	return 0;
}