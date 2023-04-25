/*
	멤버 함수 다중 정의 1

	애초에 멤버 변수로 int 값 하나만 가지고 있기 때문에 이 클래스는 int만 인자로 받으려는 의도를 가지고 있다.
	그러나 사용자가 실수를 인자로 넘기려는 시도를 할 수 있기 때문에, 아예 double 타입으로 멤버 함수를 다중 정의해서
	잘못해서 실수를 인자로 넣어버렸을 때 그걸 0으로 처리해버리는 방법을 사용했다.
	하지만 이 경우 오류 처리를 제작자 코드가 알아서 해주기 때문에 컴파일 오류가 발생하지 않아 사용자가 왜 오류가 났는지 이해하지 못할 수도 있다.
*/ 


#include <iostream>
using namespace std;


// 제작자 코드
class CMyData
{
public:
	CMyData()
		: m_nData(0)
	{

	};

	int GetData(void)
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

	// 매개변수가 double 자료형인 경우로 다중 정의했다.
	void SetData(double dParam)
	{
		m_nData = 0;
	}

private:
	int m_nData;
};

int main()
{
	CMyData a;

	// CMyData::SetData(int) 메서드가 호출된다.

	a.SetData(10);

	cout << a.GetData() << endl;

	CMyData b;

	// CMyData::SetData(double) 메서드가 호출된다.

	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}