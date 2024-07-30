/*
	<�����̳� �����>
	�ٸ� �����̳��� �������̽��� ������ �����̳ʸ� �ǹ��Ѵ�.
	STL���� �� 3������ �����̳� ����� stack, queue, priority_queue �� �����Ѵ�.

	:: �����̳� ����� 1 : stack �����̳� ::
	
	<stack �����̳�>

	LIFO ��� (���� ���߿� ���� �����Ͱ� ���� ���� ����������. ����ó�� �ٴ��� �����־ �������θ� �����Ͱ� ��������)
	
	�⺻ �����̳ʴ� deque 

	stack�� Container ���ø� ���ڷ� �޴� �����̳ʴ� 
	empty(), size(), push_back(), pop_back(), back() ���� �������̽��� �����ؾ� ��

	���� �̷��� �������̽��� �����ϴ� ����� �����̳� �Ǵ� vector, deque(�⺻), list�� stack�� �����̳ʷ� ��� ����
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}