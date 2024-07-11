/*
	vector의 begin()과 end()

	STL의 모든 컨테이너는 양방향 반복자 이상의 기능을 제공한다.
	배열 기반 컨테이너인 vector와 deque는 임의 접근 반복자를 제공하며,
	노드 기반 컨테이너인 list, set, multiset, map, multimap은 양방향 반복자를 제공한다.

	컨테이너의 모든 순차열 원소의 시작과 끝을 가리키는 반복자 쌍(구간)을 begin()과 end()
	멤버 함수로 제공하며, 컨테이너의 모든 원소는 구간 [begin(), end())로 표현된다.
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

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}