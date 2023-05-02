/*
	이전 예제를 수정하여 함수 매개변수를 CTestData param에서 const CTestData &param으로 변경해본다.
*/


#include <iostream>
using namespace std;

// 제작자 코드
class CTestData
{
public:
	// 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	~CTestData()
	{
		cout << "~CTestData()" << endl;
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
// 매개변수가 클래스 형식이며 변환 생성이 가능하다.
void TestFunc(const CTestData &param)
{
	cout << "TestFunc() : " << param.GetData() << endl;
}

int main()
{
	cout << "***** Begin *****" << endl;

	// 새로운 CTestData 객체를 생성하고 참조로 전달한다.
	TestFunc(5);

	// 함수가 반환되면서 임시 객체는 소멸한다.
	cout << "***** End *****" << endl;

	return 0;
}

/*
	실행 결과를 살펴보면 분명 변환 생성자가 호출됐음을 확인할 수 있다.
	그런데 현재 코드에는 main함수 어디에도 CTestData 클래스를 선언하거나 동적으로 생성하는 코드는 보이지 않는다.

	현재 함수 원형을 보면 매개변수가 클래스의 참조 형식이기 때문에 호출자에는 반드시 클래스 객체를 실인수로 기술해야 한다.
	그러나 이것은 CTestData &param = 5와 같은 코드가 되는데, 문법적으로 맞지 않아보임에도 실행은 멀쩡하게 잘 된다.

	그 이유는 컴파일러가 마음대로 임시 객체를 생성한 뒤 이 임시 객체에 대한 참조를 함수로 전달되게 만들었기 때문이다.
	이러한 임시 객체는 함수 종료와 함께 소멸되기 때문에 결론적으로 main()에 있는 TestFunc(5)라는 코드는 사실
	TestFunc(CTestData(5))라고 코딩한 것과 같아졌다.

	이전에 클래스 형식을 매개변수로 사용할때 반드시 참조 형식을 사용해야 한다고 배웠는데,
	이 예제를 통해 거기에 더해 묵시적 변환 생성자를 지원하는 클래스인지를 반드시 확읺해야한다는 사실이 추가되었다.
	그렇지 않으면 임시 객체가 사용자 코드의 작성자 몰래 생성된 후 사라지는 문제를 방치하게 되기 때문이다.

	물론 꼭 필요해서, 또는 사용자 편의성을 높이기 위해서 효율을 신경 쓰지 않는 상황에서는 묵시적 변환 생성자를 사용한다고 큰 문제가 발생하지는 않는다.
	다만 내부적으로 메모리를 동적 할당하는 등 덩치가 큰 객체라면 묵시적 변환 생성자가 사용자 모르게 호출될 가능성을 차단하는 것이 바람직하다.
	이를 위해서는 아래와 같이 코드를 수정해야 한다.

	explicit CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	explicit 예약어를 변환 생성자 앞에 붙이면 사용자 코드에서 묵시적으로 변환이 일어나지 않게끔 방지하여 임시 객체가 생성되지 못하게 한다.
	따라서 사용자 코드에서 직접 변환 형식을 지정해야 한다는 이유로 컴파일 오류를 발생시킬 수 있다.
	이렇게 되면 현재 main() 에 사용중인 TestFunc(5)와 같은 코드는 허용되지 않게 되므로 무조건 임시 객체가 생성된다는 사실이 명확하게 드러나는
	TestFunc(CTestData(5)); 같은 형태로 코드를 작성해야 한다.
*/

