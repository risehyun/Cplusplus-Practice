/* 
	2진트리를 1차원배열로도 표현 
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

	// 왼쪽 노드
	run1D(now * 2);

	// 오른쪽 노드
	run1D(now * 2 + 1);
}

int main()
{
	run1D(1);

	return 0;
}