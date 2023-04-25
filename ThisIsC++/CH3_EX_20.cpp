/*
	const 예약어로 선언한 상수형 메서드

	상수형 메서드, 혹은 상수화된 메서드는 멤버 변수에 읽기 접근은 가능하지만 쓰기는 허용되지 않는다.
	여기서 '쓰기'란 각종 대입 연산자나 단항 연산자 등을 사용하는 것을 말한다.
	선언 방법은 함수 원형 뒤에 const 예약어를 붙이기만 하면 된다.

	상수형 메서드는 호출이 되어도 멤버 변수의 값을 변경하거나 기능적으로 변화를 일으킬 가능성이 없다.
	심지어 상수화된 메서드가 아니라면 그것이 멤버 함수라고 하더라도 호출할 수가 없다.
	따라서 포인터를 사용하는 경우나 단순히 값을 리턴하기만 하는 GetData() 함수 등에 유용하게 사용된다.
*/

#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(int nParam) :
		m_nData(nParam)
	{};

	// 상수형 메서드로 선언 및 정의했다.
	int GetData() const
	{
		// 멤버 변수의 값을 읽을 수는 있지만 쓸(수정, 대입할) 수는 없다.
		return m_nData;
	}

	int SetData(int nParam)
	{
		m_nData = nParam;
	}


private:
	int m_nData = 0;

};

int main(int argc, char* argv[])
{
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}