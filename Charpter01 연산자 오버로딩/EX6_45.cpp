/*
	<list의 조건자 버전 merge()>

	merge() 함수를 사용할 때 디폴트 값인 less가 아닌 다른 조건으로 합병된 리스트를 정렬하고 싶을 수 있다.
	이때는 조건자 버전 merge() 멤버 함수를 사용하여 합병해야 한다.

	만약 정렬 기준이 틀렸거나 합병할 list가 정렬돼 있지 않았다면 merge() 멤버 함수는 실패하며 오류가 발생한다.

*/


#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);

	list<int>::iterator iter;
	cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl << "==============" << endl;

	// lt2와 lt1을 합병 정렬
	// 두 list의 정렬 기준이 greater(> 연산)라는 것을 predicate로 지정
	lt1.merge(lt2, greater<int>());

	cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}