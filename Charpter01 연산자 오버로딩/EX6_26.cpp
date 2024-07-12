/*
	< vector�� vector�� ��>

	�����̳� �����ڴ� �����̳ʿ� �����̳ʸ� ���ϱ� ���� �����ϴ� ��������,
	vector�Ӹ� �ƴ϶� �ٸ� �����̳� ��� �����ϴ� �����̴�.

	�����̳� �����ڷδ� ==, !=, <, <=, >, >=�� �ִ�.
*/


#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);


	// v1�� v2�� ���Ұ� ��� ������ ��
	if (v1 == v2)
	{
		cout << "v1 == v2" << endl;
	}

	// v1�� v2�� ���Ұ� ���� ������ ������ ��
	if (v1 != v2)
	{
		cout << "v1 != v2" << endl;
	}

	// v1�� v2�� ������ ���Ҹ� �ϳ��� ���� 
	// �Ѱ� �̻��� ���ҿ��� v2�� ���Ұ� �� ũ�ٸ� ��
	// v2�� ���Ұ� �� ũ�ٸ� ����
	if (v1 < v2)
	{
		cout << "v1 < v2" << endl;
	}

	return 0;
}