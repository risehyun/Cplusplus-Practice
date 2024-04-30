#include <iostream>

using namespace std;


int a = 0, b = 0;

void Input()
{
	cin >> a >> b;
}

void Output()
{
	int sum = a + b;

	for (int i = 5; i <= sum; i++)
	{
		cout << i << " ";
	}
}

int main()
{

	Input();
	Output();

	return 0;
}