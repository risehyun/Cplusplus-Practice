/*
매개변수가 두 개일 때의 디폴트 값
*/

#include <iostream>

int TestFunc(int nParam1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}

int main()
{
	std::cout << TestFunc(10) << std::endl;
	std::cout << TestFunc(10, 5) << std::endl;

	return 0;
}