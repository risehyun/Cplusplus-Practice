/*
	<list의 조건자 버전 sort()>

	sort()의 조건자 버전을 사용하면 정렬 기준을 바꿀 수 있다.
	sort()는 이항 조건자를 사용한다.
	따라서 이항 조건자가 참이면 두 원소(left, right)를 바꾸지 않고 거짓이면 두 원소를 바꿔가며 정렬한다.

	또한 사용자 정의 조건자를 사용하면 다양한 원소의 정렬 기준을 만들고 정렬할 수 있다.

*/



#include <iostream>
#include <list>

using namespace std;

// 사용자 정의 조건자 선언
struct Greater
{
	bool operator() (int left, int right) const
	{
		return left > right;
	}
};

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

	lt.sort(greater<int>()); // 조건자 greater를 사용해 내림차순으로 데이터를 정렬한다.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort(less<int>());   // 조건자 less를 사용하여 다시 오름차순으로 데이터를 정렬한다.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort(Greater());    // 사용자 정의 조건자를 사용하여 내림차순 정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}