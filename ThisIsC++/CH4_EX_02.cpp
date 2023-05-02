/*
	4.1.1 함수 호출과 복사 생성자
	
	<매개변수로 사용되는 복사 생성자>
*/

#include <iostream>
using namespace std;

class CTestData
{
public:

	// 변수로 int 한 개를 받는 생성자 정의
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	// 변수로 CTestData 클래스의 레퍼런스를 받는 생성자 정의 
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	// const를 붙여 읽기 전용으로 만든 상수형 메서드
	int GetData() const 
	{ 
		return m_nData; 
	}

	// 멤버 변수에 쓰기를 시도하는 메서드
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	int m_nData = 0;

};

// 매개변수가 CTestData 클래스 형식(값 형)이므로 호출시 원본이 아닌 복사본이 생성된다. (=복사 생성자가 호출된다.)
void TestFunc(CTestData param)
{
	cout << "Test()" << endl;

	// 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
	param.SetData(20);
}

int main(int argc, char* argv[])
{
	cout << "****Begin****" << endl;
	CTestData a(10);	// int 하나를 인자로 가지는 클래스를 만든다.
	TestFunc(a);		// 이 a는 int a가 아닌 주소 a이다. 이를 인자로 넘길 때 인자 타입이 &가 아닌 값형이므로,
						// a를 원본으로 두고 새로운 클래스를 생성한다. 따라서 쓸데없이 CTestData 객체가 두 개가 된다. 
						// 때문에 함수 내부에서 인자로 받은 주소 내부 int 값을 20으로 할당했지만 직전에 만든 a(10)의 결과에 영향을 끼치지 않는다.

	// 함수 호출 후 a의 값을 출력해본다.
	cout << "a: " << a.GetData() << endl;

	cout << "****End****" << endl;


	return 0;
}

/*
	<이 예제를 통해 얻을 수 있는 결론>

	한 객체로 할 수 있는 일은 반드시 하나로 끝내야 한다.

*/