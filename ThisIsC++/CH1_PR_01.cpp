#include <iostream>

int main()
{
	char szName[8] = {};
	int nAge = 0;

	std::cout << "�̸��� �Է��ϼ���. : " << std::endl;
	std::cin >> szName;
	std::cout << "���̸� �Է��ϼ���. : " << std::endl;
	std::cin >> nAge;

	std::cout << "���� �̸��� " << szName << "�̰�, " << nAge << "�� �Դϴ�.";

	return 0;
}