#include "chapter2_6.h"
#include <iostream>

/*
	정수 하나를 입력받고, 그 숫자가 홀수인지 짝수인지
	출력하는 프로그램을 만들어봅시다.
*/


int main(void)
{
	int Input = 0;

	std::cin >> Input;

	if (Input % 2 == 0)
	{
		std::cout << "짝수입니다." << std::endl;
	}
	else
	{
		std::cout << "홀수입니다." << std::endl;
	}

	return 0;
}