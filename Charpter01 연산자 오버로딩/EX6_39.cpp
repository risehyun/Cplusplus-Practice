/*
	<list의 reverse()>

	만약 모든 원소의 순차열을 반대로 뒤집어야 한다면, list의 reverse() 멤버 함수를 사용한다.
	reverse()는 이중 연결 리스트의 탐색 경로를 서로 바꿈으로써 순차열을 리버스 시킨다.

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

	// 리스트 내부의 데이터를 순차적으로 출력한다.
	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	// 리스트 내부의 모든 원소를 뒤집어준다.
	lt.reverse();

	// 뒤집힌 결과를 확인하기 위해 모든 데이터를 출력한다.
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}