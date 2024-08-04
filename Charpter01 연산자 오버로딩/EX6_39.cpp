/*
	<list�� reverse()>

	���� ��� ������ �������� �ݴ�� ������� �Ѵٸ�, list�� reverse() ��� �Լ��� ����Ѵ�.
	reverse()�� ���� ���� ����Ʈ�� Ž�� ��θ� ���� �ٲ����ν� �������� ������ ��Ų��.

*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	// ����Ʈ ������ �����͸� ���������� ����Ѵ�.
	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	// ����Ʈ ������ ��� ���Ҹ� �������ش�.
	lt.reverse();

	// ������ ����� Ȯ���ϱ� ���� ��� �����͸� ����Ѵ�.
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}