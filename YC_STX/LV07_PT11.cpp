#include <iostream>

using namespace std;

int input = 0;
int arr[3][3] = {
	{},
	{},
	{}
};

void Input()
{
	cin >> input;
}

void Process()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = input;
			input++;
		}
	}
}

void Output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
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
}