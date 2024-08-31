/*
	map�� [] ������
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> m;

	// [] �����ڸ� ����Ͽ� map�� key�� �����Ѵ�.
	// �̶� �ش��ϴ� key�� map�� �������� �ʴ´ٸ� pair�� �����ϴ� �߰� ������ �ϰ�,
	// ���� key�� map�� �����Ѵٸ� �ش� key�� ���� pair�� value�� �����Ѵ�.
	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;

	// map ���θ� ��ȸ�ϱ� ���� iterator ����
	map<int, int>::iterator iter;

	// iterator�� ����Ͽ� map���� ���� ���� key�� ���� pair���� ���� ū key�� ���� pair���� ���������� Ž���Ͽ� �����
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	}

	cout << endl;

	m[5] = 200; // 5�� Key�� ���� value�� 200���� �����Ѵ�.


	// map�� pair�� ó������ ������ ����Ͽ� ���� ����� Ȯ���Ѵ�.
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;

	return 0;

}