/*
	포인터가 존재했을 때의 얕은 복사
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}

	int GetData()
	{
		if (m_pnData != NULL)
		{
			return *m_pnData;
		}

		return 0;
	}

private:
	int* m_pnData = nullptr;
};

int main()
{
	// 10의 int* 값을 가지는 a를 생성한다.
	CMyData a(10);

	// a를 원본으로하면서 a의 int* 를 가지는 b를 생성한다.
	CMyData b(a);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}

/*
	이 예제는 그냥 봐선 정상적으로 작동하는 것처럼 보이지만, 
	b가 얕은 복사로 생성되었기 때문에 메모리를 해제하는 경우 심각한 오류가 발생하게 된다.

	이는 깊은 복사를 수행할 별도의 복사 생성자가 없기 때문에 컴파일러가 만들어 놓은 복사 생성자가 자동으로 작동하면서 생긴 문제다.
	컴파일러가 만든 복사 생성자는 다음과 같은 모양일 것이다.

	CMyData(const CMyData &rhs)
	{
		m_pnData = rhs.m_pnData;
	}

	이를 해결하기 위해 복사 생성자를 넣어 깊은 복사를 수행하도록 문제를 해결하는 방법은 다음 예제에서 배운다.

*/