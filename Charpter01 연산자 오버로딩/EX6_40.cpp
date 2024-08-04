/*
	<list의 unique()>

	원소를 중복되지 않게 하나씩만 남기고 싶을 때는 unique()멤버 함수를 사용할 수 있다.

	주의할 점은, unique() 멤버 함수는 인접한 원소를 하나씩만 남기기 때문에 
	다른 데이터가 중간에 다른 값으로 들어가있으면 뒤에 같은 숫자가 있더라도 해당 원소를 지우지 않는다.
	그러므로 연속하지 않는 중복 원소는 삭제되지 않은 채로 남기 때문에 최종적으로 중복되는 값이 존재할 수 있다.

	따라서 만약 '모든' 원소를 유일하게 만들고 싶다면 원소를 정렬한 뒤 unique()를 수행하면 된다.
*/

#include <iostream>
#include <list>
using namespace std;

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

	lt.unique();
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}