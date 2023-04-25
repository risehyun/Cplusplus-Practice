/*
	this 포인터의 사용

	this 포인터는 제작자가 작성 중인 클래스의 실제 인스턴스에 대한 주소를 가리키는 포인터이다.
	객체가 실제로 선언되는 시기는 클래스가 만들어지고 사용되는 미래의 일이다.
	따라서 구체적인 인스턴스 주소를 제작자가 작성하는 설계 단계에서는 알 방법이 없다.
	이때 주소가 눈에 보이지 않을 뿐 실제로는 this라는 포인터 변수(지역변수)에 저장 된다.
	이러한 this 포인터를 사용하면 사용자가 인스턴스 주소를 넘겨줄 수 있도록 허용된 상태에서 this를 대신 사용할 수 있기 때문에
	작성 실수를 일으키지 않도록 원천적으로 차단할 수 있다.
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam)
		: m_nData(nParam)
	{};

	void PrintData()
	{
		// m_nData의 값을 출력한다.
		cout << m_nData << endl;

		// CMyData 클래스의 멤버인 m_nData의 값을 출력한다.
		cout << CMyData::m_nData << endl;

		// CMyData 클래스의 멤버인 m_nData의 값을 출력한다.
		cout << this->m_nData << endl;

		// 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData를 출력한다.
		cout << this->CMyData::m_nData << endl;
	}

private:
	int m_nData;
};

int main(int argc, char* argv[])
{
	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

	return 0;
}