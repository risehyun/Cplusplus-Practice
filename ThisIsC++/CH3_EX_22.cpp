/*

const_cast<>를 사용한 상수형 참조 변경

상수형 참조인 경우에 참조자를 통해 참조 원본에 접근하더라도 오직 읽기만 가능하고 쓰기는 불가능한데,
이것을 억지로 쓰기가 가능하도록 만들고 싶을 때는 const_cast<>를 쓸 수 있다.
하지만 이를 남발하는 것은 절대 바람직하지 않으며 로직을 꼬이게 만들 수 있으므로 사실상 정말 어쩔 수 없는 상황이 아니라면
사용을 하지 않는 것이 좋다.그 정도로 문제가 있는 코드라면 아예 처음부터 다시 짜는게 더 나을 수도 있다.

*/

#include <iostream>
using namespace std;

void TestFunc(const int& nParam)
{
	// 상수형 참조였으나 일반 참조로 형변환했다.
	int& nNewParam = const_cast<int&>(nParam);

	// 따라서 l-value가 될 수 있다.
	nNewParam = 20;
}

int main(int argc, char* argv[])
{
	int nData = 10;

	// 상수형 참조로 전달하지만 함수 내부에서 상수형 참조를 일반 참조로 형변환하므로 값이 변경 된다.
	TestFunc(nData);

	// 변경된 값을 출력한다.
	cout << nData << endl;

	return 0;
}