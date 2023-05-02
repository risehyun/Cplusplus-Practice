/*
	4.1.1 함수 호출과 복사 생성자
	
	<매개변수로 사용되는 복사 생성자 - 2. 참조자로 우아하게 차단하기>
*/


#include <iostream>
using namespace std;

class CTestData
{
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	// 변수로 CTestData 클래스의 레퍼런스를 받는 생성자 정의 
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	int GetData() const
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	int m_nData = 0;


};

// &(참조자)를 인자로 받아 원본을 그대로 변경할 수 있게 되었다.
// 이제 값형을 인자로 받으면서 생기는 복사 생성자 문제가 깔끔하게 해결되었다.
void TestFunc(CTestData &param)
{
	cout << "Test()" << endl;

	param.SetData(20);
}

int main(int argc, int argv[])
{
	cout << "****Begin****" << endl;

	CTestData a(10);

	TestFunc(a);

	cout << a.GetData() << endl;

	cout << "****End****" << endl;
}

/*
	참조자를 사용해 delete로 완전히 복사 생성자를 삭제했을 때보다 훨씬 간단하게 문제를 해결했다.
	하지만 참조자를 매개변수로 사용할 때 한 가지 단점이 있는데, 바로 사용자의 코드만 봐서는 이것이 참조에 의한 호출인지 값에 의한 호출인지 알 수 없다는 점이다.
	만약 포인터를 사용해서 TestFunc(CTestData*); 를 함수 원형으로 썼다면 인자로 넘길 때 값 앞에 &를 붙여 &a 라고 넘겼을 것이다.
	이렇게 하면 인자 앞 &을 통해 '참조에 의한 호출이구나' 라고 바로 알 수 있었을 것이다. 하지만 매개변수가 참조자일 땐
	그냥 주소(변수명)만 넘기기 때문에 이를 알 방법이 없다.

	그러나 이런 단점이 있음에도 불구하고 참조자로 대체할 수 있는 포인터는 무조건 대체해주는 것이 좋다.
	포인터를 매개변수로 사용하면 댕글링 포인터 문제나 의존관계분석 불가로 인한 코드 최적화 실패 등의 문제가 발생할 수 있기 때문이다.

	무엇보다도 사용자 쪽에서 값에 의한 호출인지, 참조에 의한 호출인지 명확하게 구별해야 할 이유는 
	"함수의 실인수로 기술한 변수가 함수 호출 때문에 값이 변경될 수 있는지"를 알아야하기 때문이다.

	그러므로 함수의 매개변수 형식이 클래스 형식이라면 "무조건" 상수형 참조로 선언해야 한다. 
	(어쩔 수 없이 값을 변경을 해야 할 극히 일부의 경우를 제외하고)

	<코드로 보는 예시>
	void TestFunc(const CTestData &param)
	{
		cout << "TestFunc()" << endl;
	}


	// 피호출자 함수에서 매개변수 인스턴스의 값을 변경할 수 없다!
	param.SetData(20);

	
	매개변수가 상수형 참조이기 때문에 함수 내부에서는 객체의 '상수형 메서드'만 호출할 수 있다.
	즉, 원본 값을 바꾸지 않는 안전한 함수들만 호출이 가능해진다.
	이렇게 하면 사용자가 함수 호출로 인해 값이 변경될 여지가 없다는 것을 명확하게 알려줄 수 있다.

*/

/*
	[매개변수로 사용되는 복사 생성자에 대한 결론]

	복사 생성자는 객체의 생성과 대입을 동시에 하는 생성자를 의미한다.

	복사 생성자를 매개변수로 사용할 때는 주의해야 할 점이 있는데, 참조자(&)가 아닌 값형으로 매개변수를 받게 되면
	해당 클래스를 원본으로 하는, 또 다른 복사된 새 클래스가 생성된다는 점이다.
	따라서 프로그래머는 이로 인한 성능 저하와 헷갈림 오류를 방지하기 위해서 매개변수를 반드시 참조자로 받아야 한다.
	
	하지만 매개변수를 참조자로 받을 경우, 포인터와 다르게 인자로 넘길 때 앞에 &가 붙지 않고 변수명(주소)만 적기 때문에
	사용자 입장에서는 내가 이 함수를 호출했을 때 내 값이 변할지 변하지 않을지 알 수가 없다.
	(즉, 값에 의한 호출인지 참조에 의한 호출인지 알 방법이 없다)

	그렇다고 참조자 대신 포인터를 사용해 매개변수를 받자니 댕글링 포인터나 의존 관계 분석 문제로 인한 코드 최적화 실패 등의 단점이 존재한다.

	그러므로 참조자를 사용하면서 동시에 이 문제를 해결하기 위해서 함수 원형을 작성할 때 매개변수를 const(상수형)로 작성해서, 
	함수 내부에서는 객체의 '상수형 메서드'만 호출할 수 있도록 만들어야 한다.
	이렇게 하면 변환 자체가 불가능하기 때문에 피호출자 함수에서 매개변수 인스턴스 값을 변경할 수 없다는 것을 명확하게 할 수 있다.
*/