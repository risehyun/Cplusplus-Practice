/*
	4.1.2 깊은 복사와 얕은 복사

	깊은 복사(Deep Copy)는 복사에 의해 실제로 두 값이 생성되는 것을 의미한다.
	반면 얕은 복사(Shallow Copy)는 대상이 되는 값은 여전히 하나 뿐인데 접근 포인터만 둘로 늘어나는 것을 말한다.
	둘의 복사 결과는 완전히 다르므로 서로의 특징과 차이를 명확히 이해하고 있어야 한다.

*/

#include <iostream>
using namespace std;

int main()
{
	// 얕은 복사의 예시
	{
		// 대상이 될 값
		int nSourceData = 10;
		
		// 접근 포인터
		int *pA, *pB;

		// 두 개의 접근 포인터가 모두 같은 대상 값을 가리키고 있다.
		pA = &nSourceData;
		pB = &nSourceData;

		// 이때 예상 될 수 있는 문제점 중 하나는
		// 두 개의 접근 포인터가 같은 대상을 가리키고 있기 때문에,
		// 둘 중 하나라도 값을 delete 해버리면 대상 값이 날아가면서 나머지 포인터에서 문제가 발생하게 될 것이다. (댕글링 포인터)
	}
	
	// 얕은 복사의 문제점
	{
		int* pA, * pB;

		pA = new int;
		*pA = 10;

		pB = new int;
		pB = pA;

		cout << *pA << endl;
		cout << *pB << endl;
		
		delete pA;
		delete pB;
	}

	return 0;
}