/*
	delete 예약어를 사용해 컴파일 오류 발생

	C++ 11 스타일의 처리 방식으로, delete 예약어를 적용하여 명시적으로 메서드를 삭제해 컴파일 오류를 발생시킨다.
	이를 통해 사용자가 잘못된 인자값을 넘겼을 때 발생하는 문제를 아예 차단한다.
	어설프게 살아서 작동하는 코드는 더 심각한 문제를 만든다.
	따라서 이처럼 확실하게 예외처리하는 것이 더 바람직하다.
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

	// 살수로 double 자료형 실인수가 넘어오는 경우를 아예 차단한다.
	void SetData(double dParam) = delete;

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

	// CMyData::SetData(double) 메서드는 호출 될 수 없다. 실수가 넘어가는 경우를 아예 삭제했기 때문이다.
	//	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}
