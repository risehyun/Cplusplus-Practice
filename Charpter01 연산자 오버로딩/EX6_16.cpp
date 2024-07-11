/*
	vector�� assign()

	�����ڿ��� �Ӹ� �ƴ϶� ��� ������ �����̳ʰ� �����ϴ� assign() ��� �Լ��� ����ϸ�
	�����̳� ���� ���Ŀ��� ���������ش� �����̳ʿ� ���ϴ� ���� �ϰ������� �Ҵ��� �� �ִ�.
*/



#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5, 1);	// �ʱ갪 1�� ������ 5���� size�� ������ �����̳� ����

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v.assign(5, 2);		// ������ v�� �����ϴ� �� 5���� ��� 2�� ���Ҵ���

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}