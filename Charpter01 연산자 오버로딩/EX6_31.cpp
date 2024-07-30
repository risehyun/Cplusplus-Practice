/*
	< deque�� insert() >

	deque�� vector�� �����ϰ� insert() ��� �Լ��� ����� �ݺ��ڰ� ����Ű�� ������ ��ġ�� ���Ҹ� ������ �� �ִ�.
	������, deque�� insert()��� �Լ��� vector���� ȿ�������� �����Ѵ�.

	���ϱ�?

	vector�� ��� �� ���Ҹ� insert()�� ������ �� �Ҵ�� �޸𸮰� �����ϸ�
	���� �޸� ����� �����ϰ� �ʿ��� ũ�⸸ŭ ������ ���ο� �ϳ��� �޸� ����� ���Ҵ��Ͽ� ���� ���Ҹ� ��� �����Ѵ�.

	�ݸ� deque�� �� ���Ҹ� insert()�� ������ �� ���� �޸� ����� �������� �ʰ�
	���ο� ������ �޸� ����� �Ҵ��� �װ��� ���Ҹ� �����Ѵ�.
	������ �ε������� �ڸ��� ������ ����, ���� �߰��� �������� �ε��� �������� �հ� �ڸ� �����Ͽ�
	������ ������ �� ���� ������ �����͵��� �о�� �ڸ��� �����ش�.

	���� ��� �����Ϳ� ���� ���� �ٿ��ֱ� �۾��� ���� �ʱ� ������ vector�� ������ �� ���� �� ȿ�������� �۵��Ѵ�.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	for (int i = 0; i < 10; i++)
	{
		dq.push_back((i + 1) * 10);
	}

	deque<int>::iterator iter;
	deque<int>::iterator iter2;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl;

	return 0;
}