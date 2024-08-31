/*
	map의 insert()
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	// 기본 정렬 기준이 less이고,
	// Key, Value 모두 정수형인 컨테이너 생성
	map<int, int> m;

	m.insert(pair<int, int>(5, 100)); // 임시 Pair 객체 생성 후 m 컨테이너에 저장

	m.insert(pair<int, int>(3, 100));

	m.insert(pair<int, int>(8, 30));

	m.insert(pair<int, int>(4, 40));

	m.insert(pair<int, int>(1, 70));

	m.insert(pair<int, int>(7, 100));


	// 직접 Pair 객체 pr을 생성한다.
	pair<int, int> pr(9, 50);

	m.insert(pr);	// pr 객체 생성 후 저장

	map<int, int>::iterator iter;

	// m 컨테이너의 처음부터 끝까지 순회하면서
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		// 각 Key값과 Value값을 출력한다.
		cout << "(" << (*iter).first << ',' << (*iter).second << ")" << " ";
	}

	cout << endl;

	// 반복자는 (->) 연산자가 연산자 오버로딩되어 있으므로
	// 포인터처럼 멤버를 -> 연산자로 접근할 수 있습니다.

	// m 컨테이너의 처음부터 끝까지 순회하면서
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		// 각 Key값과 Value값을 출력한다.
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;
}