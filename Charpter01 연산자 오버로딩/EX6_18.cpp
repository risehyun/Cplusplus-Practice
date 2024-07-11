/*
	vector �ݺ����� ����

	�迭 ��� �����̳��� vector�� deque�� ���� ���� �ݺ��ڸ� �����Ѵ�.
	���� ���� �ݺ��ڴ� +, -, +=, -=, [] ������ �����ϴ�.

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

	vector<int>::iterator iter = v.begin(); // ���� ���� (10)�� ����Ų��.
	cout << *iter << endl;

	iter += 2;	// +2�� ��ġ�� ����(30)�� ����Ų��.
	cout << *iter << endl;

	iter -= 1;  // -1�� ��ġ�� ����(20)�� ����Ų��.
	cout << *iter << endl;

	return 0;
}
