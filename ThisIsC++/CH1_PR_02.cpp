/*

auto는 형이 정해지지 않은 상태에서, 초깃값의 형식에 맞춰 선언하는 인스턴스 형식을 '자동'으로 결정해준다.

*/


#include <iostream>

int main()
{
	double a = 1.5;
	auto b(a);

	std::cout << b << std::endl;

	return 0;
}