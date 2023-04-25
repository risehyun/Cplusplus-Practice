/*
	mutable 예약어

	mutable 예약어와 C++ 전용 형변환 연산자인 const_cast<>는 상수화된 대상에 대해 
	const 예약어가 지정된 상태를 해제하고 지정 멤버를 뽑아 값을 쓰거나 호출할 수 있게 한다. 

	정리하자면, mutable로 선언한 멤버 변수의 값은 상수형 메서드에서도 쓰기가 허용된다.

*/

#include <iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam)
		: m_nData(nParam)
	{ };

	~CTest()
	{
	
	};

	// 상수형 메서드로 선언 및 정의했다.
	int GetData() const
	{
		// 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다. (값을 대입, 즉 수정하는 작업이 가능해진다)
		m_nData = 20;
		return m_nData;
	}

	int SetData(int nParam) 
	{
		m_nData = nParam; 
	}

private:
	mutable int m_nData = 0;
};

int main(int argc, char* argv[])
{
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}