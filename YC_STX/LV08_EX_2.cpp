/*

* ���� *
 �ٷ��� ABC �������� ī�带 ������ �ִ�.
 �� �� 3���� ī�带 ������ ��� ������ ����϶�.
 (��, ���� ī�带 ���� 2���� ������ �ȵȴ�.)

 */

#include <iostream>

using namespace std;

char path[5] = "";
void test(int level)
{
	if (level >= 2 && path[level - 2] == path[level - 1])
	{
		return;
	}

	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		path[level] = 'A' + i;
		test(level + 1);
		path[level] = 0;
	}
}

int main()
{
	test(0);

	return 0;
}