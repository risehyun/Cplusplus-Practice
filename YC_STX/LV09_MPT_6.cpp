#include <iostream>

using namespace std;

void Swap(int* a, int* b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	Swap(&a, &b);

	cout << a << " " << b;


	return 0;
}