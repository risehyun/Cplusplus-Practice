/*
	포인터가 없는 복사 생성자 사용
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() 
	{
		cout << "CMyData()" << endl; 
	}

	int GetData(void) const
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


int main()
{
	// 디폴트 생성자가 호출되는 경우
	CMyData a;
	a.SetData(10);

	// 복사 생성자가 호출되는 경우 => 포인터를 사용하는 복사 생성자의 선언과 정의가 없으므로, 
	// 함수 형태로 호출된 생성자는 아무런 문제 없이 실행되어 a에 있는 10이라는 값을 동일하게 가지게 된다.
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}