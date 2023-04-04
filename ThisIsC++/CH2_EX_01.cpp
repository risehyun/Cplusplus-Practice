#include <iostream>

// nParam 매개변수의 디폴트 값은 10이다.
int TestFunc(int nParam = 10)
{
	return nParam;
}

int main()
{
	// 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
	std::cout << TestFunc() << std::endl;							// 10이 출력된다.

	// 호출자가 실인수를 기술하여 확정했으므로 디폴트 값을 무시하고 기술된 값을 사용한다.
	std::cout << TestFunc(20) << std::endl;							// 20이 출력된다.

	return 0;
}