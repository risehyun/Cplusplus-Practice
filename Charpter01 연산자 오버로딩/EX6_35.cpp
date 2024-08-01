/*
	<list�� remove()>

	list�� �ݺ��ڸ� �̿��� ���Ҹ� �����ϴ� erase() ���� ������ ������ ���Ҹ� �����ϴ� remove() ��� �Լ��� ������.
	�� remove() ��� �Լ��� �����̳��� ��� ���Ҹ� ���������� �˻��ϸ� �ش� ���Ҹ� �����Ѵ�.

	list�� remove()�� erase()ó�� �ش� ���� ��常�� �����ϱ� ������ �ӵ��� ������.
	�����ϰ� list���� remove() ��� �Լ��� ������.

	���� �ݺ��ڰ� �ƴ� ������ ������ �����̳��� ���Ҹ� �����ؾ� �Ѵٸ� 
	list �����̳ʸ� ������ remove()�� Ȱ���ϴ� ���� ����.
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
	lt.push_back(10);
	lt.push_back(10);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.remove(10); // ����� �����Ͱ� 10�� ������ ��� �����Ѵ�.
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}