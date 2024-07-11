/*
	vector�� front()�� back() ����

	���� ��ġ(����)�� ������ �ִ� ��� ������ �����̳�
	vector, list, deque�� front(), back() �Լ��� �����Ѵ�.
	�� �Լ����� ����Ͽ� ������ ���� ù��° ���� ���� ������ ���� ���� ������ ������ �� �ִ�.
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

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v.front() = 100; // ù��° ���� ���� 100���� �ٲ۴�.
	v.back() = 0;    // ������ ���� ���� 0���� �ٲ۴�.

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}