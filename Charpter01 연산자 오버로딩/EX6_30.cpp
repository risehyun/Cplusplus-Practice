/*
	< deque의 반복자 >

	STL 컨테이너중 deque와 vector는 배열 기반 컨테이너로서 임의 접근 반복자를 지원한다.
	따라서 deque의 반복자는 임의 접근 반복자가 제공하는 +, -, +=, -=, [] 연산을 모두 수행할 수 있다.

*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);


	deque<int>::iterator iter;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	iter = dq.begin() + 2; // 반복자에 0번 인덱스에서 + 2한 인덱스 주소를 지정한다.
	cout << *iter << endl; // 해당 iter가 가리키고 있는 주소의 데이터 값을 출력한다. (30)

	iter += 2; // 기존 반복자에 인덱스를 +2한 주소를 재지정한다.
	cout << *iter << endl; // 해당 주소에 저장되어 있는 데이터 값이 출력된다. (50)

	iter -= 3; // 기존 반복자에 인덱스를 -3한 주소를 재지정한다.
	cout << *iter << endl; // 해당 반복자가 가리키는 주소에 저장된 데이터 값이 출력된다. (20)

	return 0;
}