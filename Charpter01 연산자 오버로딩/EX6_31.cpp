/*
	< deque의 insert() >

	deque도 vector와 동일하게 insert() 멤버 함수를 사용해 반복자가 가리키는 임의의 위치에 원소를 삽입할 수 있다.
	하지만, deque의 insert()멤버 함수는 vector보다 효율적으로 동작한다.

	왜일까?

	vector의 경우 새 원소를 insert()로 삽입할 때 할당된 메모리가 부족하면
	이전 메모리 블록을 삭제하고 필요한 크기만큼 증가된 새로운 하나의 메모리 블록을 재할당하여 이전 원소를 모두 복사한다.

	반면 deque는 새 원소를 insert()로 삽입할 때 이전 메모리 블록을 삭제하지 않고
	새로운 단위의 메모리 블록을 할당해 그곳에 원소를 삽입한다.
	기존의 인덱스들의 자리를 맞춰줄 때는, 새로 추가된 데이터의 인덱스 기준으로 앞과 뒤를 조사하여
	원소의 개수가 더 작은 쪽으로 데이터들을 밀어내서 자리를 맞춰준다.

	따라서 모든 데이터에 대한 복사 붙여넣기 작업을 하지 않기 때문에 vector와 비교했을 때 조금 더 효율적으로 작동한다.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	for (int i = 0; i < 10; i++)
	{
		dq.push_back((i + 1) * 10);
	}

	deque<int>::iterator iter;
	deque<int>::iterator iter2;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl;

	return 0;
}