// vector �������� �ʱ갪 ����

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1(5); // int�� ������, �⺻�� 0���� �ʱ�ȭ�� size 5¥�� vector
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	vector<int> v2(5, 0); // int�� ������, ������ 0���� �ʱ�ȭ�� size 5¥�� vector
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	vector<int> v3(5, 10); // int�� ������, ������ 10���� �ʱ�ȭ�� size 5¥�� vector
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}