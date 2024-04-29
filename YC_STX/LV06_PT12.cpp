#include <iostream>

using namespace std;

char flag = ' ', a = ' ', b = ' ', c = ' ';

void Input()
{
	cin >> a >> b >> c;
}

void Process()
{
	if (a == 'A' && b == 'B' && c == 'C')
	{
		flag = 1;
	}
}

void Output()
{
	if (flag == 1)
	{
		cout << "ABC를 찾았다";
	}
	else
	{
		cout << "못찾았다";
	}
}

int main()
{
	Input();
	Process();
	Output();

	return 0;
}