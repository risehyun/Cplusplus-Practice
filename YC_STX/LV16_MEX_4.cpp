/* 
	2��Ʈ���� 1�����迭�ε� ǥ�� 
*/

#include <iostream>

char map1D[7] = " TBECD";

void run1D(int now)
{
	if (now >= 7 || map1D[now] == ' ')
	{
		return;
	}

	std::cout << map1D[now];

	// ���� ���
	run1D(now * 2);

	// ������ ���
	run1D(now * 2 + 1);
}

int main()
{
	run1D(1);

	return 0;
}