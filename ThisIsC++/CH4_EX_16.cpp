/*
	r-value 참조의 사용 예2
*/

#include <iostream>
using namespace std;

void TestFunc(int& rParam)
{
	cout << "TestFunc(int &)" << endl;
}

void TestFunc(int&& rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

int main()
{
	// 3 + 4 연산 결과는 r-value이다.
	// 절대로 l-value가 될 수 없다.

	TestFunc(3 + 4);

	return 0;
}

/*
	위 코드에서 매개변수가 3+4이므로 적용 가능한 형식은 int와 int&& 이다.
	int&는 실인수를 변수로 작성했을 때를 의미하는데, int x = 3이나 TestFunc(x)가 그 예시이다.
	따라서 위 코드에서는 적용되지 않는다.
	
	이런식으로 C++11에서는 함수의 매개변수를 int, int &, int && 중 어느 것으로 선택해야 할지 잘 생각해야 한다.
	물론 이 형식들을 여러 번 적용해 함수를 다중 정의할 수도 있지만, 이 경우에는 어느 것에 대응해야 할지에 대한 '모호성' 문제가 발생할 수 있다.
	다음 예제를 통해 다중 정의의 모호성에 대해 알아보자.
*/