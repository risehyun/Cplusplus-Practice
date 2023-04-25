/*
	서로 다른 자료형을 사용한 멤버 함수
*/

#include <iostream>
using namespace std;

void TestFunc(int nParam)
{
	cout << nParam << endl;
}

int main(int argc, char* argv[])
{
	TestFunc(10);
	TestFunc(5.5);

	return 0;
}