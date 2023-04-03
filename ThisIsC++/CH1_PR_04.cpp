#include <iostream>

void Swap(int& a, int& b)
{
	int nTmp = 0;
	nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int a = 10;
	int b = 20;

	Swap(a, b);

	std::cout << a << " " << b << std::endl;


	return 0;
}