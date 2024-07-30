/*
	<�����̳� �����>
	�ٸ� �����̳��� �������̽��� ������ �����̳ʸ� �ǹ��Ѵ�.
	STL���� �� 3������ �����̳� ����� stack, queue, priority_queue �� �����Ѵ�.

	:: �����̳� ����� 2 : queue �����̳� ::

	<queue �����̳�>

	FIFO ��� (���� ���� ���� �����Ͱ� ���� ���� ����������. �ͳ�ó�� �翷�� �շ��־ ���� ������� ��������)

	�⺻ �����̳ʴ� deque

	queue�� Container ���ø� ���ڷ� �޴� �����̳ʴ�
	empty(), size(), push_back(), pop_front(), front() ���� �������̽��� �����ؾ� ��

	���� pop_back()�� �����ϴ� vector�� ��� queue�� �����̳ʷ� ����� �� ����.
	��� deque, list �׸��� ����� �������̽��� �����ϴ� ����� �����̳ʸ� ����Ѵ�.	
*/



#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
	queue <int, list<int>> q; // �����̳ʷ� ����Ʈ�� ����ϰ� int ������ ���Ҹ� �����ϴ� queue ��ü ����

	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}