/*
	< erase() ��� �Լ�>

	Ư�� ��ġ�� ���Ҹ� �����Ϸ��� erase ��� �Լ��� ����Ѵ�.
	erase�� �ݺ��ڸ� ����Ͽ� ���Ҹ� �� �� Ȥ�� ���� �� ������ �� �ִ�.
*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	vector<int>::iterator iter2;

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = v.begin() + 2; // 30�� �ִ� �޸� �ּҸ� ����Ű�� ��
	// iter�� ����Ű�� ��ġ�� ���Ҹ� ����. iter2�� ���� ���� 40

	iter2 = v.erase(iter); // iter�� �ִ� �ּ� �� ���� 30�� �����ϱ� ������ 
	iter = v.begin() + 2;  // iter���� �������� 40�� ���� ��

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// [v.begin() + 1, v.end()) ������ ���Ҹ� ����
	iter2 = v.erase(v.begin() + 1, v.end()); // iter2�� ���� ���� v.end()

	// begin() + 1���� �������� ���Ҹ� ��� �������Ƿ� ù��° ������ 10�� ���Ƽ� ��µȴ�.
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";	
	}
	cout << endl;

	return 0;
}