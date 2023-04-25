/*
	생성자 다중 정의

	생성자도 함수이므로 당연히 다중 정의할 수 있다.
	이때 어떤 생성자를 호출할지는 컴파일러가 함수의 매개변수를 확인하고 알아서 결정하게 된다.
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	// 디폴트 생성자는 없다.
	// 매개 변수가 int 하나인 생성자 함수 선언 및 정의

	CMyData(int nParam)
		: m_nData(nParam)
	{};

	// 매개변수가 int 자료형 두 개인 생성자 함수 다중 정의
	CMyData(int x, int y)
		: m_nData(x + y)
	{};

	int GetData(void) const
	{
		return m_nData;
	}

private:
	int m_nData;

};

int main(int argc, char* argv[])
{
	CMyData a(10);
	CMyData b(3, 4);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}