#include <iostream>

using namespace std;

int arr[2][3] = {};
int sum = 0;

void Input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void Process()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
}

void Output()
{
	cout << sum;
}

int main()
{
	Input();
	Process();
	Output();

	return 0;
}