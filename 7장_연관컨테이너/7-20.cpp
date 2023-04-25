/*
	multimap의 lower_bound(), upper_bound(), equal_range()
	=> multimap은 중복키를 허용하므로 중복 키를 검색 할 때 
	   함수 lower_bound(), upper_bound(). equal_range()는 multimap에서 유용하게 사용된다.
	   
	   multimap은 이렇게 중복 키를 허용한다는 것 외에는 map의 특징과 동일하다.
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, int> mm;

	mm.insert(pair<int, int>(5, 100));
	mm.insert(pair<int, int>(3, 100));
	mm.insert(pair<int, int>(8, 30));
	mm.insert(pair<int, int>(3, 40));
	mm.insert(pair<int, int>(1, 70));
	mm.insert(pair<int, int>(7, 100));
	mm.insert(pair<int, int>(8, 50));

	multimap<int, int>::iterator lower_iter;
	multimap<int, int>::iterator upper_iter;

	// lower_iter는 key 3의 시작 반복자가 된다.
	lower_iter = mm.lower_bound(3);

	// upper_iter는 key 3의 끝 반복자가 된다.
	upper_iter = mm.upper_bound(3);

	cout << "구간 [lower_iter, upper_iter)의 순차열: ";
	multimap<int, int>::iterator iter;
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ") ";
	}

	cout << endl;

	// iterator 두 개가 한 쌍(pair)를 이룬다.
	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> iter_pair;

	// iter_pair는 key 3의 순차열 구간([iter_pair.first, iter_pair.second))을 각각 frist와 second 멤버로 갖는 pair 객체가 된다.
	iter_pair = mm.equal_range(3);

	cout << "구간 [iter_pair.first, iter_pair.second)의 순차열 : ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ") ";
	}

	cout << endl;

	return 0;
}