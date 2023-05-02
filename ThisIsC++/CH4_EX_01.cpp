/*
	4.1 복사 생성자
	
	<복사 생성자 선언 및 정의>
*/

#include <iostream>
using namespace std;

class CMyData
{
public :
	CMyData() 
	{ 
		cout << "CMyData()" << endl; 
	}

	// 복사 생성자 선언 및 정의
	CMyData(const CMyData& rhs)
	{
		// 이렇게 초기화 할 수도 있다.
		// : m_nData(rhs.m_nData)
		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &)" << endl;
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
	CMyData a;
	a.SetData(10);

	// 디폴트 생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}