#include "chapter2_6.h"
#include <iostream>

/*
	���� �ϳ��� �Է¹ް�, �� ���ڰ� Ȧ������ ¦������
	����ϴ� ���α׷��� �����ô�.
*/


int main(void)
{
	int Input = 0;

	std::cin >> Input;

	if (Input % 2 == 0)
	{
		std::cout << "¦���Դϴ�." << std::endl;
	}
	else
	{
		std::cout << "Ȧ���Դϴ�." << std::endl;
	}

	return 0;
}