#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	pair<set<int>::iterator, set<int>::iterator> iter_pair;

	// 원소중에 30을 가지는 구간을 반환해서 iter_pair 객체에 대입함.
	iter_pair = s.equal_range(30);

	// 현재 iter_pair에 원소를 30으로 가지는 주소가 들어있으므로 30이 출력됨
	cout << *iter_pair.first << endl;

	// 30 다음에 저장된 값이 40이므로 40이 출력됨 (set은 자동 정렬 컨테이너이기 때문에 30 다음엔 40이 오게 된다.)
	cout << *iter_pair.second << endl;

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
	{
		cout << "55가 s에 있음!" << endl;
	}
	else
	{
		cout << "55가 s에 없음!" << endl;
	}

	return 0;
}