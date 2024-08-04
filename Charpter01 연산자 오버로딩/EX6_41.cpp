/*

	<list의 조건자 버전 unique()>


	list는 조건자 버전의 unique() 멤버 함수도 제공한다.
	이항 조건자를 인자로 받는 이 버전의 함수는 연속한 두 원소를 인자로 받아 조건자가 참이면 원소를 제거한다.

*/

#include <iostream>
#include <list>

using namespace std;

bool Predicate(int first, int second)
{
	return second - first <= 0;
}

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.unique(Predicate);
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}