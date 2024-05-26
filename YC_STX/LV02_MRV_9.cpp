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

	cout << "µ¡¼À : " << calculator.Addtion(a, b) << endl;

	cout << "»¬¼À : " << calculator.Subtraction(a, b) << endl;

	cout << "°ö¼À : " << calculator.Multiplication(a, b) << endl;

	cout << "³ª´°¼À : " << calculator.Division(a, b) << endl;

	cout << "³ª¸ÓÁö : " << calculator.Remainder(a, b) << endl;

	return 0;
}