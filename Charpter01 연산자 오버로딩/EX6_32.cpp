/*
	
	<list>
	list 컨테이너는 vector와 deque처럼 시퀀스 컨테이너로 원소가 상대적인 순서를 유지한다.
	그러나 list는 노드 기반 컨테이너이기 때문에 원소가 '노드 단위'로 저장되며,
	list는 하나의 노드의 앞쪽, 뒤쪽에 서로 다른 노드가 연결된 '이중 연결 리스트'로 구현된다.

	list는 시퀀스 컨테이너이므로 시퀀스 컨테이너가 갖는 모든 특징을 갖는다.
	컨테이너 앞쪽과 뒤쪽에 차레차례 원소를 추가하는 push_front()와 pop_front(), push_back(), pop_back()
	그리고 전체 원소중 첫번째와 마지막 원소를 참조하는 front(), back()을 갖는다.
	또한 지정한 위치에 원소를 삽입하고 제거하는 insert()와 erase()를 갖는다.

	list는 노드 기반 컨테이너로 at()과 [] 연산자가 없으며
	임의 접근 반복자가 아닌, 양방향 반복자를 제공한다.

	그래서 모든 원소를 탐색하려면 양방향 반복자의 연산인 ++, --를 사용한다.
	(임의 접근 반복자일 때 사용 가능한 +, -, +=, -=, [] 연산이 불가능)


	<list의 주요 인터페이스>
	list는 vector나 deque와 유사한 멤버 함수도 존재하지만, list만의 특징적인 멤버 함수도 상당수 있다.
	ex. remove(), remove_if()

*/

// 	<list의 push_back, push_front 반복자>

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(10);   // 뒤쪽에 추가
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.push_front(100);   // 앞쪽에 추가
	lt.push_front(200);   // 100의 앞쪽에 200 추가

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}