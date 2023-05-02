/*
	4.1.1 함수 호출과 복사 생성자

	<매개변수로 사용되는 복사 생성자 - 1. delete로 차단하기>

	앞서 매개변수로 사용되는 복사 생성자에 대해 알아보면서, 	한 객체로 할 수 있는 일은 반드시 하나로 끝내야 한다는 결론을 얻었다.
	그렇다면 어떻게 그렇게 구현 할 수 있을까 ? 두 가지 방법이 있는데,
	이 예제에서는 아래의 경우만 따져본다.

	1. 복사 생성자가 사용자 코드에서 호출될 가능성을 원천적으로 차단해버린다. (delete를 이용)

*/


#include <iostream>
using namespace std;

class CTestData
{
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	// ******* (중요) 복사 생성자를 아예 삭제함으로써 복사 생성을 막는다.
	CTestData(const CTestData& rhs) = delete;


	// const를 붙여 읽기 전용으로 만든 상수형 메서드
	int GetData() const
	{
		return m_nData;
	}

	// 멤버 변수에 쓰기를 시도하는 메서드
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	int m_nData = 0;


};

void TestFunc(CTestData param)
{
	cout << "Test()" << endl;

	// 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
	param.SetData(20);
}

int main(int argc, int argv[])
{
	cout << "****Begin****" << endl;

	// 사용자 코드에서 복사 생성이 불가능하다.
	CTestData a(10);

	// 삭제된 함수를 참조하는 아래 코드는 작동이 불가능하다.
	// 이유를 정확히 짚어보자면, 위에서 이미 복사 생성자 자체를 delete로 삭제해버린 상태이다. 
	// 그러나 TestFunc에서는 값형으로 인자를 받기 때문에, 
	// 아래 함수가 실행되면 복사 생성자를 호출해 a를 원본으로 가지는 새로운 클래스 객체를 만들려고 한다.
	// 그러니 오류가 발생할 수 밖에 없는 것이다.
	TestFunc(a);
}

/*
	위의 예제를 통해 사용자 코드에서 성능이 나빠지는 것을 문법적으로 차단할 수 있게 되었다.
	하지만 이는 좀 극단적인 방법이라고 할 수 있다.
	약간의 유연성을 가미하기 위해서는 다음 예제에서 알아볼 참조자를 이용하는 것이 좋다.
*/