/*
	4.3.2 r-value 참조

	r-value는 단순 대입 연산자의 오른쪽 항을 의미한다.
	이 오른쪽 항에는 기존의 변수 외에도 3, 5와 같은 리터럴 상수가 올 수도 있다.
	그렇기 때문에 3에 4를 대입하는 3 = 4 코드가 불가능하듯이, 변수가 아닌 대상에 참조를 선언하는 것은 본래 허용되지 않는다.

	하지만 C++ 11 표준이 생기면서 r-value에 대한 참조자가 새롭게 제공되었다.
	r-value 참조라는 기존 참조와 달리 &가 두번 붙는다.
	따라서 int 자료형에 대한 참조가 int&라면, int 자료형에 대한 r-value 참조 형식은 int&&이 된다.
*/

#include <iostream>
using namespace std;

int main()
{
	// data는 int 자료형에 대한 r-value 참조자를 의미한다.
	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;

	return 0;
}

/*
	data는 int 자료형에 대한 r-value 참조자를 의미하기 때문에, int&& 3+4는 int &&data = 7과 다르지 않게 된다.
	그런데 data++; 코드를 보면 일반 변수가 아닌 상수에 대한 참조값인데도 단항 연산을 수행할 수 있다는 것을 알 수 있다.
	이렇게 되면 'int &&과 int data가 뭐가 달라?' 라고 생각할 수 있다.

	r-value라는 것은 '연산에 따라 생성된 임시 객체'이다. 
	따라서 int 자료형 변수x와 int 자료형 상수 3을 더한 결과는 int 자료형 상수가 되는데, 이것도 r-value가 된다.
	r-value 참조는 정확히 이러한 케이스를 위해 존재한다.

	다음 예제를 통해 적용해보자.

*/