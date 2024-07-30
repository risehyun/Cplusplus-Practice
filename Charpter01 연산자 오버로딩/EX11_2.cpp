/*
	<컨테이너 어댑터>
	다른 컨테이너의 인터페이스를 변경한 컨테이너를 의미한다.
	STL에는 총 3가지의 컨테이너 어댑터 stack, queue, priority_queue 가 존재한다.

	:: 컨테이너 어댑터 2 : queue 컨테이너 ::

	<queue 컨테이너>

	FIFO 방식 (가장 먼저 들어온 데이터가 가장 먼저 빠져나간다. 터널처럼 양옆이 뚫려있어서 들어온 순서대로 빠져나감)

	기본 컨테이너는 deque

	queue의 Container 템플릿 인자로 받는 컨테이너는
	empty(), size(), push_back(), pop_front(), front() 등의 인터페이스를 제공해야 함

	따라서 pop_back()만 존재하는 vector의 경우 queue의 컨테이너로 사용할 수 없다.
	대신 deque, list 그리고 상술한 인터페이스를 제공하는 사용자 컨테이너를 사용한다.	
*/



#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
	queue <int, list<int>> q; // 컨테이너로 리스트를 사용하고 int 형식의 원소를 저장하는 queue 객체 생성

	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}