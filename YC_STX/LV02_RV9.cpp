#include <iostream>

int main()
{
	int a = 0, b = 0;

	std::cin >> a >> b;

	int sum = a + b;
	int div = a * b;

	if (sum > 10)
	{
		std::cout << "�ո���";
	}
	
	if (div > 10)
	{
		std::cout << "������";
	}


	return 0;
}