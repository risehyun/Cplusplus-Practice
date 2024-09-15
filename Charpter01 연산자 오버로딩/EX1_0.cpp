#include<iostream>
#include<queue>
using namespace std;

int n, k;
queue<int>q;

int main(void)
{
	int i;
	cin >> n >> k;
	for (i = 1; i <= n; i++)
		q.push(i);		//	ť�� n���� ����
	cout << "<";
	while (q.size() != 0)		//	ť�� �� ������ �ݺ�
	{
		for (i = 1; i < k; i++)
		{
			q.push(q.front());		//	k-1��° ���Ҹ� �� �ڿ� ����
			q.pop();			// 	�� �տ� �ִ� ���Ҵ� ����
		}
		cout << q.front();		//	k��° ���Ұ� �� �տ� ���� ��.
		if (q.size() != 1)
			cout << ", ";
		q.pop();		//	k��° ���� ��� �� ����
	}
	cout << ">";
	return 0;
}