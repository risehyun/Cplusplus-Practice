#include <iostream>

int main()
{
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0;

	std::cin >> b1 >> b2 >> b3 >> b4;

	if (b1 > b2 && b1 > b3 && b1 > b4)
	{
		std::cout << "b1�� ���� ũ��";
	}
	else if (b2 > b1 && b2 > b3 && b2 > b4)
	{
		std::cout << "b2�� ���� ũ��";
	}
	else if (b3 > b1 && b3 > b2 && b3 > b4)
	{
		std::cout << "b3�� ���� ũ��";
	}
	else if (b4 > b1 && b4 > b2 && b4 > b3)
	{
		std::cout << "b4�� ���� ũ��";
	}

	return 0;
}