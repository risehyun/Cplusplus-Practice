/*
	multimap�� lower_bound(), upper_bound(), equal_range()
	=> multimap�� �ߺ�Ű�� ����ϹǷ� �ߺ� Ű�� �˻� �� �� 
	   �Լ� lower_bound(), upper_bound(). equal_range()�� multimap���� �����ϰ� ���ȴ�.
	   
	   multimap�� �̷��� �ߺ� Ű�� ����Ѵٴ� �� �ܿ��� map�� Ư¡�� �����ϴ�.
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

	// lower_iter�� key 3�� ���� �ݺ��ڰ� �ȴ�.
	lower_iter = mm.lower_bound(3);

	// upper_iter�� key 3�� �� �ݺ��ڰ� �ȴ�.
	upper_iter = mm.upper_bound(3);

	cout << "���� [lower_iter, upper_iter)�� ������: ";
	multimap<int, int>::iterator iter;
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ") ";
	}

	cout << endl;

	// iterator �� ���� �� ��(pair)�� �̷��.
	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> iter_pair;

	// iter_pair�� key 3�� ������ ����([iter_pair.first, iter_pair.second))�� ���� frist�� second ����� ���� pair ��ü�� �ȴ�.
	iter_pair = mm.equal_range(3);

	cout << "���� [iter_pair.first, iter_pair.second)�� ������ : ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ") ";
	}

	cout << endl;

	return 0;
}