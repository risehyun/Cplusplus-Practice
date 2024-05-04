#include <iostream>

using namespace std;

int sum(int _a, int _b)
{
	return _a + _b;
}

int comp(int _a, int _b)
{
	return _a - _b;
}

void print(int _t1, int _t2)
{
	cout << "Че : " << _t1 << endl << "Тї : " << _t2;
}

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	int resultSum = sum(a, b);
	int resultComp = comp(a, b);

	print(resultSum, resultComp);

	return 0;
}