/*
	using namespace 선언을 적용하기 전
	=> 전역 변수 100 출력
*/

#include <iostream>
using namespace std;

int nData = 100;

namespace TEST
{
	int nData = 200;
}

int main()
{
	cout << nData << endl;

	return 0;
}