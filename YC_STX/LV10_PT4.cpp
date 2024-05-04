  #include <iostream>

using namespace std;

void printData(int value)
{
	cout << value << endl;
}

void even(int value)
{
	printData(value * 2);
}

void odd(int value)
{
	printData(value - 10);
}


int main()
{

	int a = 0, b = 0;

	cin >> a >> b;

	if (a / b % 2 == 0)
	{
		even(a / b);
	}
	else
	{
		odd(a / b);
	}

	printData(a + b);


	return 0;
}