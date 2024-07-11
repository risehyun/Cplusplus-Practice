/*
	<일반 반복자와 상수 반복자>

	만약 반복자가 가리키는 원소의 값을 변경하지 않는 경우,
	일반 반복자보다는 상수 반복자를 사용하는 것이 좋다.

	일반 반복자(iterator)는 포인터(int*)와 유사하며 
	상수 반복자(const_iterator)는 상수 포인터(const int*)와 비슷하다.

	주의할 점은 const vector<int>::iterator는 int* const처럼 동작하기 때문에
	++citer처럼 반복자를 연산으로 이동시킬 수 없으므로 주의해야 한다.
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl;

	*iter = 100;
//	*citer = 100; => 상수 반복자는 가리키는 원소를 변경할 수 없음.

	return 0;
}