#include <iostream>

using namespace std;

void countDown(int x)
{
	if (x < 0)
	{
		return;
	}

	std::cout << x;

	countDown(x-1);

	if (x != 0)
	{
		std::cout << x;
	}

}


int main()
{
	int n = 0;

	cin >> n;

	countDown(n);

	return 0;
}