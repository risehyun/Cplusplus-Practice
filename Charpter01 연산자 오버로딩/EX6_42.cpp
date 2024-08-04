/*
	<list�� sort>

	list�� ������ ���� �Լ� sort()�� �����Ѵ�.
	������ ������ �� �ִ� �����̴� ������ �����̳��� vector, deque, list�� �ִ�.

	���� �����̳��� set, map, multimap�� ��쿡�� ��ü ���� ���ؿ� ���� �ڵ� ���ĵȴ�.

	������ �����̳��� vector�� deque�� sort() �˰����� �̿��� ������ ������ �� ������,
	list�� sort() �˰����� ������ �� ����.
	sort() �˰����� ���� ���� �ݺ���(��κ� quick sort�� ������)�� �����ϴ� �����̳ʿ��� ����� �� �ֱ� �����̴�.

	���� list�� ��ü ���� ��� �Լ� sort()�� �����Ѵ�.
	list�� ����Ǵ� ��ü ���� ��� �Լ��� �������� ���� (<����, less)�� �⺻���� �����Ѵ�.

	public:
	void sort() { // order sequence
		sort(less<>{});
	}
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort();	// ��������(less)����
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}

