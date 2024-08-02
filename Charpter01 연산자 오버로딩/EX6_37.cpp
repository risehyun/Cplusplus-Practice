/*
	<list�� splice()>

	������ �ִ� ��� ��� �����̳� list�� splice()��� ��� �Լ��� ������.
	�� splice() �Լ��� ����ϸ� �ٸ� list�� �����̳��� �������� �߶���� �� �ִ�.
*/


#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> It1;
	list<int> It2;

	It1.push_back(10);
	It1.push_back(20);
	It1.push_back(30);
	It1.push_back(40);
	It1.push_back(50);

	It2.push_back(100);
	It2.push_back(200);
	It2.push_back(300);
	It2.push_back(400);
	It2.push_back(500);

	list<int>::iterator iter;
	cout << "lt1: ";
	for (iter = It1.begin(); iter != It1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter = It2.begin(); iter != It2.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl << "=============" << endl;

	iter = It1.begin();
	++iter;
	++iter;		// 30 ������ ��ġ�� ����Ŵ

	It1.splice(iter, It2); // iter�� ����Ű�� ��ġ�� lt2�� ��� ���Ҹ� �߶� ����.

	cout << "It1: ";
	for (iter = It1.begin(); iter != It1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "It2: ";
	for (iter = It2.begin(); iter != It2.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}