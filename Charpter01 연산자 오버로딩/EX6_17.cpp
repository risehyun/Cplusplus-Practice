/*
	vector�� begin()�� end()

	STL�� ��� �����̳ʴ� ����� �ݺ��� �̻��� ����� �����Ѵ�.
	�迭 ��� �����̳��� vector�� deque�� ���� ���� �ݺ��ڸ� �����ϸ�,
	��� ��� �����̳��� list, set, multiset, map, multimap�� ����� �ݺ��ڸ� �����Ѵ�.

	�����̳��� ��� ������ ������ ���۰� ���� ����Ű�� �ݺ��� ��(����)�� begin()�� end()
	��� �Լ��� �����ϸ�, �����̳��� ��� ���Ҵ� ���� [begin(), end())�� ǥ���ȴ�.
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}