/*

	<이동 시맨틱>
	
	C++11에 추가된 '이동 시맨틱' 개념은 이동 생성자와 이동 대입 연산자로 구현된다.

	소멸자는 종류가 하나 뿐이지만 생성자는 여러 개가 존재할 수 있다.
	이동 시맨틱도 생성자의 종류 중 하나이다.

	이전까지는 임시 객체가 생기는 것은 막을 수가 없었다.
	그렇기 때문에 임시 객체가 생성되더라도 부하를 막을 수 있도록 구조를 변경해야 했다.
	
	결론적으로 복사 생성자와 대입 연산자에 r-value 참조를 
	조합해서 새로운 생성 및 대입의 경우를 만들어낸 것이다.

*/

#include <iostream>
using namespace std;

// 제작자 코드
class CTestData
{
public:
	CTestData() { cout << "CTestData()" << endl; }
	~CTestData() { cout << "~CTestData()" << endl; }

	CTestData(const CTestData& rhs)
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	CTestData& operator=(const CTestData&) = default;

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

CTestData TestFunc(int nParam)
{
	cout << "**TestFunc(): Begin***" << endl;
	CTestData a;
	a.SetData(nParam);
	cout << "**TestFunc(): End **** " << endl;
	
	return a;
}

int main()
{
	CTestData b;
	cout << "*Begin********" << endl;
	b = TestFunc(20);
	cout << "*After********" << endl;
	CTestData c(b);

	return 0;
}

/*
	TestFunc() 함수의 반환 형식은 CTestData 클래스이다.
	그러므로 이 함수를 호출한 쪽에서는 이름 없는 임시 생성자가 생성되고 소멸된다.

	b = TestFunc(20); 코드가 실행되는 순간, 이동 생성자 CTestData(CTestData &&) 가 호출된다.
	즉, 임시 객체가 만들어질 때 복사 생성이 아닌 다른 방법으로 생성이 된 것이다.

	이것이 어떤 의미인지를 이해하기 위해서는 깊은 복사와 얕은 복사에 대해 다시 상기해야 한다.
	얕은 복사의 경우 같은 참조를 가지는 객체가 두 개가 되면서 도중에 값이 사라지거나 하면 문제가 되기 때문에 깊은 복사로 해결해야한다는 내용이 핵심이었는데,
	
	이동 생성자를 사용하는 이번 케이스는 그것과 정반대 개념을 사용해야 하는 상황이다.
	어차피 임시 생성자로 생성된 객체는 반드시 소멸될 임시 객체이므로 깊은 복사를 사용하는 것은 낭비가 된다. 따라서 얕은 복사를 수행하여 성능을 높여야 한다.

	왜냐하면 일반적인 복사 생성의 경우 두 배의 메모리 용량이 필요하기 때문이다. 게다가 메모리를 복사하는 연산을 반드시 실행해야만 한다.
	그러나 이동 생성자를 이용해 메모리를 복사하지 않는다면, 사라질 객체로부터 알맹이만 빼고 껍데기는 버리는 것처럼 코드를 유연하게 짤 수 있게 된다.
	
	이렇게 하면 메모리는 절반만 사용하면서 반복해서 메모리 복사를 할 필요가 없어지며, 연산을 덜 하는 만큼 성능도 향상된다.
	만약 클래스가 내부적으로 크기가 큰 동영상 파일등을 로드하거나 각 인스턴스마다 메모리를 20~30MB 정도 사용한다고 한다면
	이동 생성자 없이 메모리 크기 및 연산 속도 면에서 큰 차이가 날 것이다.

	
*/
