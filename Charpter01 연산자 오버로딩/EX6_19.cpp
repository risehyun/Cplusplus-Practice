/*
	<�Ϲ� �ݺ��ڿ� ��� �ݺ���>

	���� �ݺ��ڰ� ����Ű�� ������ ���� �������� �ʴ� ���,
	�Ϲ� �ݺ��ں��ٴ� ��� �ݺ��ڸ� ����ϴ� ���� ����.

	�Ϲ� �ݺ���(iterator)�� ������(int*)�� �����ϸ� 
	��� �ݺ���(const_iterator)�� ��� ������(const int*)�� ����ϴ�.

	������ ���� const vector<int>::iterator�� int* constó�� �����ϱ� ������
	++citeró�� �ݺ��ڸ� �������� �̵���ų �� �����Ƿ� �����ؾ� �Ѵ�.
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

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl;

	*iter = 100;
//	*citer = 100; => ��� �ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����.

	return 0;
}