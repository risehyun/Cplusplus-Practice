/* 
	static 예약어를 사용한 정적 멤버 선언 및 정의

	정적 멤버는 static 예약어를 사용해 선언할 수 있다.

	정적 멤버는 인스턴스를 선언하지 않고 직접 호출 할 수 있다.
	사실상 전역변수나 함수와 같다. 단지 클래스의 멤버로 들어왔을 뿐이다.

	그러나 this 포인터를 사용할 수 없으며, 반드시 선언과 정의를 분리하여 작성해야 한다.
	
	객체 지향 프로그래밍에서 전역 함수와 변수를 남발하면 
	객체지향 개념과 상관없는 코드로 변질될 가능성이 커진다.
	따라서 전역 함수와 변수 대신에 적극적으로 정적 멤버를 활용하는 것이 바람직하다.
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CTest
{
public:
	CTest(int nParam)
		: m_nData(nParam)
	{
		m_nCount++;
	};

	int GetData(void)
	{
		return m_nData;
	}

	void ResetCount()
	{
		m_nCount = 0;
	}


	// 정적 메서드 선언 및 정의
	static int GetCount()
	{
		return m_nCount;
	}


private:
	int m_nData;

	// 정적 멤버 변수 선언(정의는 아니다!)
	static int m_nCount;
};

int CTest::m_nCount = 0;

int main()
{
	// CTest 클래스의 정적 멤버 변수 정의
	CTest a(5), b(10);

	// 정적 멤버에 접근
	cout << a.GetCount() << endl;
	b.ResetCount();

	// 정적 멤버에 접근, 인스턴스 없이도 접근 가능!
	cout << CTest::GetCount() << endl;

	return 0;
}