#include <iostream>

int main()
{
	char szName[8] = {};
	int nAge = 0;

	std::cout << "이름을 입력하세요. : " << std::endl;
	std::cin >> szName;
	std::cout << "나이를 입력하세요. : " << std::endl;
	std::cin >> nAge;

	std::cout << "나의 이름은 " << szName << "이고, " << nAge << "살 입니다.";

	return 0;
}