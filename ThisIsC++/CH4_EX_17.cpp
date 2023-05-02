/*
	다중 정의의 모호성
*/

#include <iostream>
using namespace std;

// r-value 참조 방식
void TestFunc(int&& rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

// r-value 참조 형식과 호출자 코드가 같다.
void TestFunc(int nParam)
{
	cout << "TestFunc(int)" << endl;
}

int main()
{
	// 아래 코드는 int형과 int&&형 모두 가능하기 때문에 모호한 호출이므로 에러가 발생한다.
	TestFunc(3 + 5);

	return 0;
}

/*
	지금까지는 이해를 돕기 위해 int와 같은 기본 자료형을 예시로 사용했지만,
	사실 r-value 참조가 꼭 필요한 순간은 기본 자료형이 아닌 '클래스에 적용될 때'이다.
*/