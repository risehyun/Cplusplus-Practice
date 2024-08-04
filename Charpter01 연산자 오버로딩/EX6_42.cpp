/*
	<list의 sort>

	list는 정렬을 위한 함수 sort()를 제공한다.
	정렬을 수행할 수 있는 컨테이는 시퀀스 컨테이너인 vector, deque, list가 있다.

	연관 컨테이너인 set, map, multimap의 경우에는 자체 정렬 기준에 의해 자동 정렬된다.

	시퀀스 컨테이너중 vector와 deque는 sort() 알고리즘을 이용해 빠르게 정렬할 수 있지만,
	list는 sort() 알고리즘을 수행할 수 없다.
	sort() 알고리즘은 임의 접근 반복자(대부분 quick sort로 구현됨)를 지원하는 컨테이너에만 사용할 수 있기 때문이다.

	따라서 list는 자체 정렬 멤버 함수 sort()를 제공한다.
	list에 적용되는 자체 정렬 멤버 함수는 오름차순 정렬 (<연산, less)을 기본으로 수행한다.

	public:
	void sort() { // order sequence
		sort(less<>{});
	}
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort();	// 오름차순(less)정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}

