/*
	<list의 splice()>

	순서가 있는 노드 기반 컨테이너 list는 splice()라는 멤버 함수를 가진다.
	이 splice() 함수를 사용하면 다른 list의 컨테이너의 순차열을 잘라붙일 수 있다.
*/


#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> It1;
	list<int> It2;

	It1.push_back(10);
	It1.push_back(20);
	It1.push_back(30);
	It1.push_back(40);
	It1.push_back(50);

	It2.push_back(100);
	It2.push_back(200);
	It2.push_back(300);
	It2.push_back(400);
	It2.push_back(500);

	list<int>::iterator iter;
	cout << "lt1: ";
	for (iter = It1.begin(); iter != It1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter = It2.begin(); iter != It2.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl << "=============" << endl;

	iter = It1.begin();
	++iter;
	++iter;		// 30 원소의 위치를 가리킴

	It1.splice(iter, It2); // iter가 가리키는 위치에 lt2의 모든 원소를 잘라 붙임.

	cout << "It1: ";
	for (iter = It1.begin(); iter != It1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "It2: ";
	for (iter = It2.begin(); iter != It2.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}