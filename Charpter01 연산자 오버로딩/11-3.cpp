/*
	<컨테이너 어댑터>
	다른 컨테이너의 인터페이스를 변경한 컨테이너를 의미한다.
	STL에는 총 3가지의 컨테이너 어댑터 stack, queue, priority_queue 가 존재한다.

	:: 컨테이너 어댑터 1 : priority_queue 컨테이너 ::

	<priority_queue 컨테이너>

	데이터에 우선순위(less, greater)가 적용된 우선순위 queue를 구현한 템플릿 클래스

	기본 컨테이너는 vector

	priority_queue는 내부적으로 STL의 힙 알고리즘인 make_heap(), push_heap(), pop_heap()을 사용해 구현되어 있음
	따라서 priority_queue의 컨테이너 템플릿 인자로 받는 컨테이너는 '임의 접근 반복자'를 제공하는 컨테이너여야 한다.

	또한 이 컨테이너는 empty(), size(), push_back(), pop_back(), front() 등의 인터페이스를 제공해야 함

	따라서 이러한 인터페이스를 제공하는 vector(기본), deque를 컨테이너로 사용 가능하다.
*/


#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main()
{
	priority_queue<int> pq1; // 기본 컨테이너로 vector<int>, 기본 정렬 기준을 less로 설정

	pq1.push(40);
	pq1.push(20);
	pq1.push(30);
	pq1.push(50);
	pq1.push(10);

	cout << "priority_queue[less]:" << endl;
	while (!pq1.empty())
	{
		cout << pq1.top() << endl;
		pq1.pop();
	}

	cout << "=================" << endl;

	priority_queue<int, deque<int>, greater<int>> pq2;
	pq2.push(40);
	pq2.push(20);
	pq2.push(30);
	pq2.push(50);
	pq2.push(10);

	cout << "priority_queue[greater]:" << endl;
	while (!pq2.empty())
	{
		cout << pq2.top() << endl;
		pq2.pop();
	}

	return 0;

}

