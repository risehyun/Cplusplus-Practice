#include <iostream>

using namespace std;

class Calculator
{
public:
	int Addtion(int _a, int _b)
	{
		return _a + _b;
	}

	int Subtraction(int _a, int _b)
	{
		return _a - _b;
	}

	int Division(int _a, int _b)
	{
		return _a / _b;
	}

	int Remainder(int _a, int _b)
	{
		return _a % _b;
	}

	int Multiplication(int _a, int _b)
	{
		return _a * _b;
	}
};



int main()
{
	Calculator calculator;

	int a = 0, b = 0;

	cin >> a >> b;

	cout << "���� : " << calculator.Addtion(a, b) << endl;

	cout << "���� : " << calculator.Subtraction(a, b) << endl;

	cout << "���� : " << calculator.Multiplication(a, b) << endl;

	cout << "������ : " << calculator.Division(a, b) << endl;

	cout << "������ : " << calculator.Remainder(a, b) << endl;

	return 0;
}