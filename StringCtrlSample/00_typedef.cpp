/*

<typedef> 
= C++에 이미 정의된 타입이나 사용자가 직접 정의한 구조체, 클래스 타입에 별명을 붙일 때 사용한다.

*/ 

#include <iostream>
using namespace std;
typedef int i; // int 타입에 i라는 별명을 붙임, 이제 i라고 쓰면 int 자료형인 것으로 간주됨

int main()
{
	i result = 100;
	cout << result << '\n';
	return 0;
}