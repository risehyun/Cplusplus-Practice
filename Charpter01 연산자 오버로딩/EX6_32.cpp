/*
	
	<list>
	list �����̳ʴ� vector�� dequeó�� ������ �����̳ʷ� ���Ұ� ������� ������ �����Ѵ�.
	�׷��� list�� ��� ��� �����̳��̱� ������ ���Ұ� '��� ����'�� ����Ǹ�,
	list�� �ϳ��� ����� ����, ���ʿ� ���� �ٸ� ��尡 ����� '���� ���� ����Ʈ'�� �����ȴ�.

	list�� ������ �����̳��̹Ƿ� ������ �����̳ʰ� ���� ��� Ư¡�� ���´�.
	�����̳� ���ʰ� ���ʿ� �������� ���Ҹ� �߰��ϴ� push_front()�� pop_front(), push_back(), pop_back()
	�׸��� ��ü ������ ù��°�� ������ ���Ҹ� �����ϴ� front(), back()�� ���´�.
	���� ������ ��ġ�� ���Ҹ� �����ϰ� �����ϴ� insert()�� erase()�� ���´�.

	list�� ��� ��� �����̳ʷ� at()�� [] �����ڰ� ������
	���� ���� �ݺ��ڰ� �ƴ�, ����� �ݺ��ڸ� �����Ѵ�.

	�׷��� ��� ���Ҹ� Ž���Ϸ��� ����� �ݺ����� ������ ++, --�� ����Ѵ�.
	(���� ���� �ݺ����� �� ��� ������ +, -, +=, -=, [] ������ �Ұ���)


	<list�� �ֿ� �������̽�>
	list�� vector�� deque�� ������ ��� �Լ��� ����������, list���� Ư¡���� ��� �Լ��� ���� �ִ�.
	ex. remove(), remove_if()

*/

// 	<list�� push_back, push_front �ݺ���>

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(10);   // ���ʿ� �߰�
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	lt.push_front(100);   // ���ʿ� �߰�
	lt.push_front(200);   // 100�� ���ʿ� 200 �߰�

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}