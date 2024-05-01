#include <iostream>

using namespace std;

void BBQ(int a, int b)
{
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;

	cout << "ÇÕ : " << sum << endl;
	cout << "Â÷ : " << sub << endl;
	cout << "°ö : " << mul << endl;
	cout << "¸ò : " << div << endl;
}

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	BBQ(a, b);

	return 0;
}