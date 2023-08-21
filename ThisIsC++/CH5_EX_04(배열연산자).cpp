/*
	5.4 배열 연산자

	배열 연산자 역시 다른 연산자처럼 다중 정의를 할 수 있다.

	C에서 포인터 변수를 배열 연산으로 다루는 일은 흔하다.
	그래서 처음 C를 배울 때는 배열과 포인터를 혼용하는 경우가 많은데, 
	내부를 뜯어보면 배열과 포인터 둘 다 근본적으로 포인터임을 알 수 있다.
	하지만 어쩐지 포인터라고하면 뭔가 복잡해보이고, 배열이라면 상대적으로 쉽게 보인다.
	
	그렇다면 포인터와 배열을 하나로 합쳐주면 어떨까?
	포인터 및 메모리 동적 할당을 수행하면서 동시에 사용자에게 배열을 다루는 것처럼 
	편리함을 제공하면 성능 향상이나 기능 확장이라는 두 마리 토끼를 잡을 수 있지 않을까?

	아래의 예제에서 CintArray 클래스는 사용자가 int 배열을 사용하는 것과 동일한 경험을 제공한다.
	그러나 클래스 내부에 메모리를 직접 관리하는 코드가 들어간다.

	배열 연산자 함수의 매개변수는 int 자료형 변수 하나뿐인데, 이것은 배열의 인덱스로 활용된다.
	그리고 '상수형 참조를 통한 접근'을 포함해 아래의 두 가지 형태로 정의할 수 있다.

	int& operator[] (int nIndex); 
	=> int&를 반환하는 이유는 l-value로 사용되는 경우를 고려해야 하기 때문이다.
	   일반적인 경우 배열 연산이 l-value가 되든 r-value가 되든 첫 번째 배열 연산자 함수가 사용된다.
	  
	int operator[] (int nIndex) const;
	=>  상수형 메서드인 이 두번째 연산은 상수형(const) 이므로 상수형 참조를 통해서만 호출할 수 있으며 오로지 r-value로만 사용된다.

*/

#include <iostream>
using namespace std;

// 제작자 코드
class CIntArray
{
public:
	CIntArray(int nSize)
	{
		// 전달된 개수만큼 int 자료를 담을 수 있는 메모리를 확보한다.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CIntArray() 
	{ 
		delete m_pnData; 
	}

	// 상수형 참조인 경우의 배열 연산자
	int operator[](int nIndex) const
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}

	int& operator[](int nIndex)
	{
		cout << "operator[]" << endl;
		return m_pnData[nIndex];
	}

private:
	// 배열 메모리
	int* m_pnData;

	// 배열 요소의 개수
	int m_nSize;
};

// 사용자 코드
void TestFunc(const CIntArray &arParam)
{
	cout << "TestFunc()" << endl;

	// 상수형 참조이므로 'operator[](int nIndex) const'를 호출한다.
	cout << arParam[3] << endl;
}

int main()
{
	CIntArray arr(5);
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = i * 10;
	}

	// 함수의 매개변수 형식이 상수형 참조이므로 const CIntArray &arParam이 적용된다.
	TestFunc(arr);

	return 0;
}