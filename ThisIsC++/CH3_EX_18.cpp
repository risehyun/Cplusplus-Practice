#include <iostream>
using namespace std;

class CTest
{
public:
	// 디폴트 생성자 선언 및 정의 => 별도로 정의를 기술하지 않고도 선언과 정의가 완벽하게 분리된다.
	CTest(void) = default;
	int m_nData = 5;
};

// CTest::CTest(void) {}

int main(int argc, char* argv[])
{
	CTest a;
	cout << a.m_nData << endl;

	return 0;
}