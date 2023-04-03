/*
	참조에 의한 호출
*/

#include <iostream>

using namespace std;

void TestFunc(int& rParam)
{
	// 피호출자 함수에서 원본의 값을 변경했다.
	rParam = 100;
}

int main(void)
{
	int nData = 0;

	// 참조에 의한 인수 전달이다.
	TestFunc(nData); // 매개변수로 전달하는 nData의 별명이 인자인 rParam이 된다.
	cout << nData << endl;

	return 0;
}