#include <iostream>
using namespace std;

int main()
{
	int nData = 10;

	// nData 변수에 대한 참고자(레퍼런스) 선언
	int& ref = nData;

	// 참조자 값을 변경하면 원본도 변경된다.
	ref = 20;
	cout << nData << endl;

	// 포인터를 쓰는 것과 비슷하다.
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl;

	return 0;
}