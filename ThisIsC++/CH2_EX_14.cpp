/*
	네임스페이스와 전역 변수의 검색 우선권
*/

#include <iostream>

using namespace std;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main()
{
	TEST::TestFunc();

	return 0;
}