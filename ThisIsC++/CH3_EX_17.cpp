/* 
	디폴트 생성자의 정의를 클래스 외부로 분리

	함수 원형 선언을 별도로 할 경우 선언과 정의가 분리되는 것과 동일한 이치로
	클래스에서도 멤버 함수의 선언과 정의를 별도로 분리할 수 있다.


*/


#include <iostream>
using namespace std;

class CTest
{
public:
	// 디폴트 생성자 선언
	CTest(void);
	int m_nData = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
// 이 경우 클래스 선언 내부에서 생성자의 정의까지 포함되는 것이므로 선언과 정의를 명백히 분리해야 할 경우에는 코드를 작성할 수 없다.
CTest::CTest(void) {}

int main(int argc, char* argv[])
{
	CTest a;
	cout << a.m_nData << endl;

	return 0;
}