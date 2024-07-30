/*
	<�����̳� �����>
	�ٸ� �����̳��� �������̽��� ������ �����̳ʸ� �ǹ��Ѵ�.
	STL���� �� 3������ �����̳� ����� stack, queue, priority_queue �� �����Ѵ�.

	:: �����̳� ����� 1 : priority_queue �����̳� ::

	<priority_queue �����̳�>

	�����Ϳ� �켱����(less, greater)�� ����� �켱���� queue�� ������ ���ø� Ŭ����

	�⺻ �����̳ʴ� vector

	priority_queue�� ���������� STL�� �� �˰����� make_heap(), push_heap(), pop_heap()�� ����� �����Ǿ� ����
	���� priority_queue�� �����̳� ���ø� ���ڷ� �޴� �����̳ʴ� '���� ���� �ݺ���'�� �����ϴ� �����̳ʿ��� �Ѵ�.

	���� �� �����̳ʴ� empty(), size(), push_back(), pop_back(), front() ���� �������̽��� �����ؾ� ��

	���� �̷��� �������̽��� �����ϴ� vector(�⺻), deque�� �����̳ʷ� ��� �����ϴ�.
*/


#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main()
{
	priority_queue<int> pq1; // �⺻ �����̳ʷ� vector<int>, �⺻ ���� ������ less�� ����

	pq1.push(40);
	pq1.push(20);
	pq1.push(30);
	pq1.push(50);
	pq1.push(10);

	cout << "priority_queue[less]:" << endl;
	while (!pq1.empty())
	{
		cout << pq1.top() << endl;
		pq1.pop();
	}

	cout << "=================" << endl;

	priority_queue<int, deque<int>, greater<int>> pq2;
	pq2.push(40);
	pq2.push(20);
	pq2.push(30);
	pq2.push(50);
	pq2.push(10);

	cout << "priority_queue[greater]:" << endl;
	while (!pq2.empty())
	{
		cout << pq2.top() << endl;
		pq2.pop();
	}

	return 0;

}

