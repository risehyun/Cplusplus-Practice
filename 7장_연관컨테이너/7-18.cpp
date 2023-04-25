/*
	map의 [] 연산자
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> m;

	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;


	// map 내부 순회를 위한 iterator 선언과 각 pair 순차적으로 출력
	map<int, int>::iterator iter;

	for (iter = m.begin();  iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;


	// 5를 Key로 가진 pair를 찾아내어 Key 5의 시작 반복자를 반환한다.
	iter = m.find(5);

	// *** 만약 5를 key로 가진 pair가 end()가 아니라면 그 key를 가진 value를 출력함.
	if (iter != m.end())
	{
		cout << "Key 5에 매핑된 value : " << iter->second << endl;
	}

	map<int, int>::iterator lower_iter;
	map<int, int>::iterator upper_iter;

	// Key 5의 시작을 가리키는 반복자를 반환한다. 반환 값은 순차열의 시작이다.
	lower_iter = m.lower_bound(5);

	// Key 5의 다음 원소(여기서는 Key 7)를 가리키는 반복자를 반환한다. 반환 값은 순차열의 끝이다.
	upper_iter = m.upper_bound(5);

	cout << "구간 [lower_iter, upper_iter)의 순차열 : ";

	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << "," << iter->second << ") ";
	}

	cout << endl;


	// **  equal_range()를 이용한 순차열 구간 설정
	pair<map<int, int>::iterator, map<int, int>::iterator> iter_pair;

	// 순차열 구간은 [iter_pair.first, iter_pair.second)이 된다.
	iter_pair = m.equal_range(5);

	cout << "구간 [iter_pair.first, iter_pair.second)의 순차열: ";
	for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout << "** (" << iter->first << ',' << iter->second << ") **";
	}
	cout << endl;

	return 0;
}