/*
	<list의 remove()>

	list는 반복자를 이용해 원소를 제거하는 erase() 말고도 원소의 값으로 원소를 제거하는 remove() 멤버 함수를 가진다.
	이 remove() 멤버 함수는 컨테이너의 모든 원소를 순차적으로 검색하며 해당 원소를 제거한다.

	list의 remove()는 erase()처럼 해당 값의 노드만을 제거하기 때문에 속도가 빠르다.
	유일하게 list만이 remove() 멤버 함수를 가진다.

	따라서 반복자가 아닌 원소의 값으로 컨테이너의 원소를 제거해야 한다면 
	list 컨테이너를 선택해 remove()를 활용하는 것이 좋다.
*/


#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	lt.push_back(10);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.remove(10); // 저장된 데이터가 10인 노드들을 모두 삭제한다.
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}