/*
	<list�� ������ ���� sort()>

	sort()�� ������ ������ ����ϸ� ���� ������ �ٲ� �� �ִ�.
	sort()�� ���� �����ڸ� ����Ѵ�.
	���� ���� �����ڰ� ���̸� �� ����(left, right)�� �ٲ��� �ʰ� �����̸� �� ���Ҹ� �ٲ㰡�� �����Ѵ�.

	���� ����� ���� �����ڸ� ����ϸ� �پ��� ������ ���� ������ ����� ������ �� �ִ�.

*/



#include <iostream>
#include <list>

using namespace std;

// ����� ���� ������ ����
struct Greater
{
	bool operator() (int left, int right) const
	{
		return left > right;
	}
};

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

	lt.sort(greater<int>()); // ������ greater�� ����� ������������ �����͸� �����Ѵ�.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort(less<int>());   // ������ less�� ����Ͽ� �ٽ� ������������ �����͸� �����Ѵ�.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.sort(Greater());    // ����� ���� �����ڸ� ����Ͽ� �������� ����
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}