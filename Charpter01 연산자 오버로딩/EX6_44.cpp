/*
	<list의 merge()>

	두 list를 합병해야 한다면 merge() 멤버 함수를 사용한다.
	여기서 주의할 점이 있다.

	합병은 정렬된 두 list를 하나의 정렬된 list로 합병하므로,
	합병할 두 list는 미리 정렬되어 있어야 한다.

	slice() 멤버 함수와 비교하여 알아두면 좋다.

*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(25);
	lt2.push_back(35);
	lt2.push_back(60);

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
	cout << endl << "==========================" << endl;

	lt1.merge(lt2); // lt2를 lt1으로 합병 정렬 한다. 이때 자동 정렬되는 기준은 less다.
					// 합병이 끝나면 lt2의 데이터는 텅 비게 된다.

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