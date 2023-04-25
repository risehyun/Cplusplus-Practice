/*
	map()�� insert() ��ȯ ��

	map�� insert() ��� �Լ��� setó��,
	������ ������ ��ġ�� ����Ű�� �ݺ��ڿ� 
	���� ���� ���θ� ��Ÿ���� bool���� pair ��ü�� ��ȯ�Ѵ�.
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> m;
	pair<map<int, int>::iterator, bool> pr; // insert() ����� ���� pair ��ü�̴�.
											// pr.first�� ���� ������ ��ġ�� ����Ű�� �ݺ����̰�
											// pr.second�� ���� ���� ���θ� ��Ÿ���� bool ���̴�.

	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	pr = m.insert(pair<int, int>(9, 50)); // �����ϸ� true ��ȯ, ���� ���� key���� �����Ƿ� ���������� ����ȴ�.
	
	if (true == pr.second)	// ������ �����ߴٸ�
	{
		cout << "Key: " << pr.first->first << ", value: "
			<< pr.first->second << " ���� �Ϸ�!" << endl;
	}

	else // ������ �����ߴٸ�
	{
		cout << "Key 9�� �̹� m�� �ֽ��ϴ�." << endl;
	}

	pr = m.insert(pair<int, int>(9, 50)); // �̹� ���� Key���� �����ϱ� ������ ���忡 �����ϰ� �ȴ�.

	// ���� ������
	if (true == pr.second)
	{
		cout << "Key : " << pr.first->first << ", value: "
			<< pr.first->second << "���� �Ϸ�!" << endl;
	}

	// ���� ���н�
	else
	{
		cout << "key: 9�� �̹� m�� �ֽ��ϴ�." << endl;
	}


	return 0;

}