/*
	TEST 네임스페이스에 using 선언 추가
	=> 모호성 문제로 컴파일 오류
*/

#include <iostream>


int nData = 100;

namespace TEST
{
	int nData = 200;
}

using namespace std;

int main()
{
	cout << nData << endl;

	return 0;
}