#include <iostream>

int main()
{

	int x = 0, y = 0;

	std::cin >> x >> y;

	if (x == 7 && y == 9)
	{
		std::cout << "인증됨";
	}
	else
	{
		std::cout << "재시도";
	}

	return 0;
}