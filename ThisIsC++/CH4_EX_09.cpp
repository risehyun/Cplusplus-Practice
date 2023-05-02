/*
	대입 연산자
	
	단순 대입 연산자는 오른쪽 항의 값을 왼쪽 항에 집어넣는 연산자이다.
	이 단순 대입 연산자는 일반 변수들 뿐만 아니라 구조체나 클래스에도 기본적으로 적용된다.
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;

		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}

	~CMyData()
	{
		delete m_pnData;
	}

	int GetData()
	{
		if (m_pnData != NULL)
		{
			return *m_pnData;
		}

		return 0;
	}

private:
	int* m_pnData = nullptr;
};

int main()
{
	CMyData a(10);
	CMyData b(20);

	// 단순 대입을 시도하면 모든 멤버의 값을 그대로 복사한다.
	// 즉, 얕은 복사가 수행되므로 이대로 코드를 실행하면 오류가 발생한다.
	// 이를 해결하기 위해서는 C++에서 지원하는 연산자 다중 정의를 이용해서 따로 깊은 복사가 가능한 대입 연산자를 정의해주어야 한다.
	a = b;
	cout << a.GetData() << endl;

	return 0;
}
