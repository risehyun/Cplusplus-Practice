/*
	map�� insert()
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	// �⺻ ���� ������ less�̰�,
	// Key, Value ��� �������� �����̳� ����
	map<int, int> m;

	m.insert(pair<int, int>(5, 100)); // �ӽ� Pair ��ü ���� �� m �����̳ʿ� ����

	m.insert(pair<int, int>(3, 100));

	m.insert(pair<int, int>(8, 30));

	m.insert(pair<int, int>(4, 40));

	m.insert(pair<int, int>(1, 70));

	m.insert(pair<int, int>(7, 100));


	// ���� Pair ��ü pr�� �����Ѵ�.
	pair<int, int> pr(9, 50);

	m.insert(pr);	// pr ��ü ���� �� ����

	map<int, int>::iterator iter;

	// m �����̳��� ó������ ������ ��ȸ�ϸ鼭
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		// �� Key���� Value���� ����Ѵ�.
		cout << "(" << (*iter).first << ',' << (*iter).second << ")" << " ";
	}

	cout << endl;

	// �ݺ��ڴ� (->) �����ڰ� ������ �����ε��Ǿ� �����Ƿ�
	// ������ó�� ����� -> �����ڷ� ������ �� �ֽ��ϴ�.

	// m �����̳��� ó������ ������ ��ȸ�ϸ鼭
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		// �� Key���� Value���� ����Ѵ�.
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;
}