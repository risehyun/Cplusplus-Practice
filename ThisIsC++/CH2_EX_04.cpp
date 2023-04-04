/*
	디폴트 매개변수와 다중 정의가 조합되었을 때의 모호성
*/

#include <iostream>

void TestFunc(int a)
{
	std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10)
{
	std::cout << "TestFunc(int, int)" << std::endl;
}

int main()
{
//	TestFunc(5);
	return 0;
}