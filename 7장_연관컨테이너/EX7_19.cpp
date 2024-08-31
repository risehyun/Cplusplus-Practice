/*
	multimap의 count()와 find()
	=> multimap이 중복 키를 허용한다는 개념을 이용해 함수를 사용해보자.
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

	multimap<int, int>::iterator iter;
	for (iter = mm.begin(); iter != mm.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}
	cout << endl;

	// count() 함수를 사용해 인자로 넘긴 값과 같은 Key를 가진 pair의 개수를 세어 리턴한다.
	cout << "key 3의 원소의 개수는 " << mm.count(3) << endl;

	// Key 3을 가진 Pair 중 첫 번째 반복자를 선언한다. 만약 여기서 Key 3이 없어 찾지 못했다면 iter는 mm.end()가 된다.
	iter = mm.find(3);
	if (iter != mm.end())
	{
		cout << "첫 번째 Key 3에 매핑된 value : " << iter->second << endl;
	}

	return 0;
}