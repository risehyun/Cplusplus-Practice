/*
	<list�� insert()�� erase()>

	list�� ���� ū Ư¡ �� �ϳ��� 
	������ �߰��� ���Ҹ� ���� (insert), ���� (erase) �ϴ���
	��� �ð� ���⵵�� ���� ������ ���δٴ� ���̴�.

	�� �׷���?

	�ٷ� �迭 ��� �����̳� vector�� deque�� ��� ���ο� ���Ұ� �߰��Ǹ� ���Ҹ� �о����
	list�� ��쿡�� ��� ��� �����̳��� list�� �̷� ���� �о�� ���� 
	���� �߰��� ��带 ���� ��忡 ���� �����ϱ⸸ �ϸ� �Ǳ� �����̴�.

	���� ��� ��� �����̳ʴ� ����(insert)�� ����(erase) ������ �ݺ��ڸ� ��ȿȭ ��Ű�� �ʴ´�.
	�ݺ��ڰ� ����Ű�� ���� ��ü�� ���ŵ��� �ʴ� ��, ���� �ݺ��ڰ� �⸮Ű�� ���Ҵ� �״�� �����Ѵ�.
	
	������ �迭 ��� �����̳�(vector, deque)�� �ݺ��ڴ� ������ ���԰� ���� ������ �߻��ϸ�
	�޸𸮰� ���Ҵ�ǰų� ���Ұ� �̵��� �� �����Ƿ� �ݺ��ڰ� ��ȿȭ �ȴ�.
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

	list<int>::iterator iter = lt.begin();
	list<int>::iterator iter2;
	++iter;
	++iter;

	// ���� �ݺ��ڴ� 30�� ����Ǿ��ִ� �ε����� ����Ű�� �ִ�.

	iter2 = lt.erase(iter); // iter(30)�� ���Ҹ� �����Ѵ�. 
							// iter2���� ���ŵ� 30�� ���� ������ 40�� �ִ� �ε����� ����ȴ�.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "iter2 : " << *iter2 << endl;

	iter = iter2;          // iter2�� ����� 40�� ����� �ε����� iter�� �Ҵ��ߴ�.
	iter2 = lt.insert(iter, 300); // iter2�� ����Ű�� �ִ� 40�� ����� ��� �տ� 300�� ����� ��尡 ���� �����ȴ�.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout << *iter << ' ';
	}

	cout << endl;

	cout << "iter2 : " << *iter2 << endl; // 300�� ����Ǿ� ����

	return 0;
}