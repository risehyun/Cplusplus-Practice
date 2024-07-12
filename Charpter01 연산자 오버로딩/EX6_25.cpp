/*
	< �ݺ��ڷ� �����ϴ� �����ڿ� assign() ��� �Լ� >

	insert()�� erase() ��� �Լ� �ܿ��� �ݺ��ڷ� �����ϴ� vector�� �������̽��δ�
	�����ڿ� assign() ��� �Լ��� �ִ�.

	vector�� �����ڴ� �ݺ��ڸ� ���� �ʱ�ȭ �� �� �ְ�,
	assign() ��� �Լ��� �ݺ��ڸ� ���� �Ҵ�� �� �ִ�.
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

	// ������ [v.begin(), b.end())�� v2 ���θ� �ʱ�ȭ �Ѵ�.
	vector<int> v2(v.begin(), v.end());

	// v2 ���
	vector<int>::iterator iter;
	for (iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout << *iter << " "; 
	}
	cout << endl;

	vector<int> v3;

	// v3�� ������ [v.begin(), v.end())�� �Ҵ��Ѵ�.
	v3.assign(v.begin(), v.end());

	for (iter = v3.begin(); iter != v3.end(); ++iter)
	{
		cout << *iter << " "; // v3 ���
	}
	cout << endl;

	return 0;
}