#include <iostream>

void bbq(int x)
{

	if (x == 0)
	{
		return;
	}

//	std::cout << x;

	bbq(x - 1);

}

int main()
{

	bbq(4);

	return 0;
}