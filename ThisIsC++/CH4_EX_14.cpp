/*
	이름 없는 임시 객체의 생성과 소멸
*/

#include <iostream>

using namespace std;

// 제작자 코드
class CTestData
{
public:
	CTestData(int nParam, char* pszName) 
		: m_nData(nParam), 
		m_pszName(pszName)
	{
		cout << "CTestData(int): " << m_pszName << endl;
	}

	~CTestData()
	{
		cout << "~CTestData(): " << m_pszName << endl;
	}

	CTestData(const CTestData &rhs) 
		: m_nData(rhs.m_nData),
		m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData &): " << m_pszName << endl;
	}

	CTestData& operator=(const CTestData& rhs)
	{
		cout << "operator=" << endl;

		// 값은 변경하지만 이름(m_pszName)은 그대로 둔다.
		m_nData = rhs.m_nData;

		return *this;
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

	// 멤버 변수를 저장하기 위한 멤버
	char *m_pszName = nullptr;
};

// CTestData 객체를 반환하는 함수이다.
CTestData TestFunc(int nParam)
{
	// CTestData 클래스 인스턴스인 a는 지역 변수이다.
	// 따라서 함수가 반환되면 소멸된다.
	CTestData a(nParam, "a");

	return a;
}

int main()
{
	CTestData b(5, "b");
	cout << "*****Before*****" << endl;

	// 함수가 반환되면서 임시 객체가 생성됐다가 대입 연산 후 즉시 소멸한다!
	b = TestFunc(10);

	cout << "*****After*****" << endl;
	cout << b.GetData() << endl;

	return 0;
}

/*
	이 예제에서는 함수로 반환된 클래스 인스턴스를 전혀 활용하지 않았음에도 불구하고 임시 객체가 자동으로 생성돠고 소멸한다.
	하지만 그 인스턴스를 사용하지 않기 때문에 그런 과정을 한 보람이 아무것도 없다.
	이런 경우에는 Release모드로 컴파일하면 이름 없는 임시객체가 아예 생성되지 않는다.

	하지만 이러한 '이름 없는 객체'에 '별명'을 부여하면 상황이 달라진다.
	참조 형식을 설명할 때 '별명'(&를 r-value에 두는 경우)이라는 표현을 배운 적이 있는데,
	아래 코드 처럼 수정하면 본명은 없지만 별명은 존재하는 경우가 된다.

	CTestData &rData = TestFunc(10);

	이 경우에는 기존의 임시 객체가 생성 후 할당 완료시 바로 해제 되는 것과 달리 별명이 존재하므로
	생명 주기가 늘어나 소멸 시점이 main() 함수가 끝나는 시점으로 바뀐다.

	'별명'이 생긴다는 것은 '이름'과 유사한 것이 생겼다는 것이고, '이름' 이란 '식별자'이므로,
	식별자가 생겨난 만큼 이후 코드에서는 임시 객체에 지속해서 접근할 수 있게 된다.

	이름 없는 임시 객체를 다룰 때 가장 중요한 것은 
	첫번째로 그 존재를 의식하는 것이고
	두번째는 생성 및 소멸 시기를 정확하게 인식하는 것이다.

	특히 소멸 시기를 인식하는 것이 가장 중요하다.
*/