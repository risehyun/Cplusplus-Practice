/*
	네임스페이스
*/

#include <iostream>

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		std::cout << "TEST::TestFunc()" << std::endl;
	}	
}

int main()
{
	TEST::TestFunc();
	std::cout << TEST::g_nData << std::endl;

	return 0;
}