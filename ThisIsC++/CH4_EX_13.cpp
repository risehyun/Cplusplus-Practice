/*
	4.2.2 허용되는 변환
*/

#include <iostream>
using namespace std;

// 제작자 코드
class CTestData
{
public:
	explicit CTestData(int nParam) : m_nData(nParam)
	{
		
	}

	// CTestData 클래스는 int 자료형으로 변환될 수 있다!
	operator int(void) 
	{ 
		return m_nData; 
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
int main(int argc, char* argv[])
{
	CTestData a(10);
	cout << a.GetData() << endl;

	// 원래 아래 코드는 실행되지 않는 것이 정석이지만 operator int(void) 를 위에서 선언했기 때문에 CTestData 형식에서 int 자료형으로 변환될 수 있게 되었다.
	// 하지만 만약 연산자가 exlicit라면 묵시적 형변환이 불가능해지기 때문에 아래의 코드를 사용할 수 없게 되며, 대신 static_cast 연산자를 사용해 명시적으로 형변환을 해야 한다.
	cout << a << endl;

	// 아래 코드처럼 ()로 강제 캐스팅을 하는 것은 전형적은 C스타일이며 C++에서는 권장되지 않는다. 대신 static_cast를 사용해야 한다.
	cout << (int)a << endl;

	// C++에서 사용해야 하는 캐스팅 방법이며, 적절한 형변환 연산자를 제공하지 않으면 강제로 형식을 변환해주지 않는 다는 점에서 C스타일의 강제 형변환 연산자인 ()와 다르다.
	// 따라서 이 방법을 사용하면 형변환 해도 되는 것들로 제한할 수 있고, 사용자 관점에서는 다소 불편할 수 있지만 근본적인 실수를 예방하는데 큰 도움이 된다.
	cout << static_cast<int>(a) << endl;

	return 0;
}

/*
	묵시적 형변환을 허용하면 사용자 입장에서는 편리해진다.
	따라서 꼭 explicit 선언을 강제화 할 필요는 없으며, 사용 여부는 제작자가 판단해야 한다.
*/