#include <iostream>

using namespace std;

void BBQ(int a, int b)
{
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;

	cout << "�� : " << sum << endl;
	cout << "�� : " << sub << endl;
	cout << "�� : " << mul << endl;
	cout << "�� : " << div << endl;
}

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	BBQ(a, b);

	return 0;
}