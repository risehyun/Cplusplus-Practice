/*
	4.2 묵시적 변환

	묵시적 변환을 사용하면 같은 내용의 지속적인 언급을 피할 수가 있다. 이를 통해 생산성을 높일 수 있게 된다.
	하지만 묵시적 변환에는 단점 또한 존재한다. 제작자와 사용자 사이에 미리 정보를 공유하는 과정이 생략되거나, 정보가 불충분한 경우
	사용자가 제작자의 의도와 상관없이 매우 비효율적인 코드를 작성할 수가 있다.

	이런 문제가 발생하지 않도록 제작자는 각별히 신경을 써야한다.
	사용자 역시 효과적으로 코드를 사용하기 위해 노력해야 한다.

	지금부터는 묵시적 변환을 사용했을 때 구체적으로 어떤 문제가 발생하고 그것을 어떻게 대응해야 할지를 살펴본다.

	4.2.1 변환 생성자
	매개변수가 한개인 생성자를 다른 말로 변환 생성자라고 한다.
	그런데 이 변환 생성자에는 의도치 않은 상황에서 은근슬쩍 호출되버리는 문제가 있다.

	더 큰 문제는 불필요한 임시 객체를 만들어냄으로써 프로그램의 호율을 갉아먹는 원인이 된다는 점이다.
	다음 예제를 통해 그 예시를 알아보자.
*/

// int 자료형의 변환 생성자

#include <iostream>
using namespace std;

// 제작자 코드
class CTestData
{
public:
	// 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

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

// 사용자 코드
// 매개변수가 클래스 형식이며 묵시적으로 변환 생성이 가능하다.
void TestFunc(CTestData param)
{
	cout << "TestFunc() : " << param.GetData() << endl;
}

int main()
{
	// int 자료형에서 CTestData 형식으로 변환될 수 있다.
	TestFunc(5);

	return 0;
}