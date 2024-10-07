#include <iostream>

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	long long int A, B, gcd;
	std::cin >> A >> B;

	gcd = GCD(A, B);
	std::cout << A * B / gcd;
}