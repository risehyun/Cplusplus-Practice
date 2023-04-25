/*
	map�� [] ������
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


	// map ���� ��ȸ�� ���� iterator ����� �� pair ���������� ���
	map<int, int>::iterator iter;

	for (iter = m.begin();  iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;


	// 5�� Key�� ���� pair�� ã�Ƴ��� Key 5�� ���� �ݺ��ڸ� ��ȯ�Ѵ�.
	iter = m.find(5);

	// *** ���� 5�� key�� ���� pair�� end()�� �ƴ϶�� �� key�� ���� value�� �����.
	if (iter != m.end())
	{
		cout << "Key 5�� ���ε� value : " << iter->second << endl;
	}

	map<int, int>::iterator lower_iter;
	map<int, int>::iterator upper_iter;

	// Key 5�� ������ ����Ű�� �ݺ��ڸ� ��ȯ�Ѵ�. ��ȯ ���� �������� �����̴�.
	lower_iter = m.lower_bound(5);

	// Key 5�� ���� ����(���⼭�� Key 7)�� ����Ű�� �ݺ��ڸ� ��ȯ�Ѵ�. ��ȯ ���� �������� ���̴�.
	upper_iter = m.upper_bound(5);

	cout << "���� [lower_iter, upper_iter)�� ������ : ";

	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << "(" << iter->first << "," << iter->second << ") ";
	}

	cout << endl;


	// **  equal_range()�� �̿��� ������ ���� ����
	pair<map<int, int>::iterator, map<int, int>::iterator> iter_pair;

	// ������ ������ [iter_pair.first, iter_pair.second)�� �ȴ�.
	iter_pair = m.equal_range(5);

	cout << "���� [iter_pair.first, iter_pair.second)�� ������: ";
	for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout << "** (" << iter->first << ',' << iter->second << ") **";
	}
	cout << endl;

	return 0;
}