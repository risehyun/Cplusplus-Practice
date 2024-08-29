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

	// �����߿� 30�� ������ ������ ��ȯ�ؼ� iter_pair ��ü�� ������.
	iter_pair = s.equal_range(30);

	// ���� iter_pair�� ���Ҹ� 30���� ������ �ּҰ� ��������Ƿ� 30�� ��µ�
	cout << *iter_pair.first << endl;

	// 30 ������ ����� ���� 40�̹Ƿ� 40�� ��µ� (set�� �ڵ� ���� �����̳��̱� ������ 30 ������ 40�� ���� �ȴ�.)
	cout << *iter_pair.second << endl;

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
	{
		cout << "55�� s�� ����!" << endl;
	}
	else
	{
		cout << "55�� s�� ����!" << endl;
	}

	return 0;
}