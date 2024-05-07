#include <iostream>

using namespace std;

void ABC(int a, int b, int* sum, int* gop)
{
	*sum = a + b;
	*gop = a * b;
}

int main()
{
	int a = 0, b = 0, sum = 0, gop = 0;

	cin >> a >> b;

	ABC(a, b, &sum, &gop);

	cout << sum << " " << gop;

	return 0;
}