/*
	복사 생성자를 지정하여 깊은 복사를 수행해 얕은 복사에서 일어나는 문제를 해결하는 방법
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

	// 복사 생성자 선언 및 정의
	CMyData(const CMyData& rhs)
	{
		cout << "CMyData(const CMyData &)" << endl;

		// 새로 메모리를 할당한다.
		m_pnData = new int;

		// 포인터가 가리키는 위치에 값을 복사한다.
		// 이때 단순히 포인터 변수의 주소를 같은 값으로 만드는 것이 아니라, 
		// 포인터가 가리키는 대상 메모리에 저장된 값을 가져와 다시 포인터가 가리키는 대상 메모리로 복사한다.
		// 이로써 둘은 별개의 메모리를 가지기 때문에 어느 한 쪽에서 객체를 delete하더라도 남은 한쪽에 영향을 끼치지 않는다.
		*m_pnData = *rhs.m_pnData;
	}

	// 객체가 소멸하면 동적 할당한 메모리를 해제한다.
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
	// 포인터 멤버 데이터
	int* m_pnData = nullptr;
};

int main()
{
	CMyData a(10);

	CMyData b(a);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}
