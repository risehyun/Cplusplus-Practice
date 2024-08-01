/*
	<list의 insert()와 erase()>

	list의 가장 큰 특징 중 하나는 
	순차열 중간에 원소를 삽입 (insert), 제거 (erase) 하더라도
	상수 시간 복잡도의 수행 성능을 보인다는 점이다.

	왜 그럴까?

	바로 배열 기반 컨테이너 vector나 deque의 경우 새로운 원소가 추가되면 원소를 밀어내지만
	list의 경우에는 노드 기반 컨테이너인 list는 이런 원소 밀어내기 없이 
	새로 추가된 노드를 기존 노드에 서로 연결하기만 하면 되기 때문이다.

	또한 노드 기반 컨테이너는 삽입(insert)와 제거(erase) 동작은 반복자를 무효화 시키지 않는다.
	반복자가 가리키는 원소 자체가 제거되지 않는 한, 현재 반복자가 기리키는 원소는 그대로 존재한다.
	
	하지만 배열 기반 컨테이너(vector, deque)의 반복자는 원소의 삽입과 제거 동작이 발생하면
	메모리가 재할당되거나 원소가 이동할 수 있으므로 반복자가 무효화 된다.
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

	list<int>::iterator iter = lt.begin();
	list<int>::iterator iter2;
	++iter;
	++iter;

	// 현재 반복자는 30이 저장되어있는 인덱스를 가리키고 있다.

	iter2 = lt.erase(iter); // iter(30)의 원소를 제거한다. 
							// iter2에는 제거된 30의 다음 원소인 40이 있는 인덱스가 저장된다.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "iter2 : " << *iter2 << endl;

	iter = iter2;          // iter2에 저장된 40이 저장된 인덱스를 iter에 할당했다.
	iter2 = lt.insert(iter, 300); // iter2가 가리키고 있는 40이 저장된 노드 앞에 300이 저장된 노드가 새로 생성된다.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl;

	cout << "iter2 : " << *iter2 << endl; // 300이 저장되어 있음

	return 0;
}