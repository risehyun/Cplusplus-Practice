/*
	<list와 vector의 insert()>

	노드 기반 컨테이너인 list의 삽입, 제거 동작은 배열 기반 컨테이너인 vector의 삽입, 제거와 같은 결과가 나온다.
	그러나 내부 동작은 다르다.

	vector와 달리 list는 원소가 삽입될 때 할당 메모리가 부족하면 메모리를 재할당하지 않고 
	새로운 노드를 생성, 삽입하여 기존 노드에 연결한다.

	따라서 속도가 빠르며 반복자들을 무효화하지도 않는다.
	erase() 함수의 동작도 삽입 동작과 같은 특징을 보인다.
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> v;
	list<int> lt;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	vector<int>::iterator viter = v.begin();
	++viter; // 20원소를 가리킨다.

	list<int>::iterator liter = lt.begin();
	++liter; // 20원소를 가리킨다.

	viter = v.insert(viter, 600);  // v의 두 번째 요소로 삽입한다.
	liter = lt.insert(liter, 600); // lt의 두 번째 요소로 삽입한다.

	cout << "vector: " << *viter << endl;
	cout << "list: " << *liter << endl;

	cout << "vector : ";
	for (viter = v.begin(); viter != v.end(); ++viter)
	{
		cout << *viter << ' ';
	}
	cout << endl;

	cout << "list : ";
	for (liter = lt.begin(); liter != lt.end(); ++liter)
	{
		cout << *liter << ' ';
	}
	cout << endl;

	return 0;
}