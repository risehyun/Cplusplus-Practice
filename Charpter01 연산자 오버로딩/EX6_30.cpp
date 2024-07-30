/*
	< deque�� �ݺ��� >

	STL �����̳��� deque�� vector�� �迭 ��� �����̳ʷμ� ���� ���� �ݺ��ڸ� �����Ѵ�.
	���� deque�� �ݺ��ڴ� ���� ���� �ݺ��ڰ� �����ϴ� +, -, +=, -=, [] ������ ��� ������ �� �ִ�.

*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);


	deque<int>::iterator iter;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	iter = dq.begin() + 2; // �ݺ��ڿ� 0�� �ε������� + 2�� �ε��� �ּҸ� �����Ѵ�.
	cout << *iter << endl; // �ش� iter�� ����Ű�� �ִ� �ּ��� ������ ���� ����Ѵ�. (30)

	iter += 2; // ���� �ݺ��ڿ� �ε����� +2�� �ּҸ� �������Ѵ�.
	cout << *iter << endl; // �ش� �ּҿ� ����Ǿ� �ִ� ������ ���� ��µȴ�. (50)

	iter -= 3; // ���� �ݺ��ڿ� �ε����� -3�� �ּҸ� �������Ѵ�.
	cout << *iter << endl; // �ش� �ݺ��ڰ� ����Ű�� �ּҿ� ����� ������ ���� ��µȴ�. (20)

	return 0;
}