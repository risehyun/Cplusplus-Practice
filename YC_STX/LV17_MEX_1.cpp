/*

	<DFS VS BFS>

	DFS : 모든 노드를 탐색해야 하는 경우에 BFS보다 속도가 빠르다.
		  구현 코드가 짧다 (재귀함수를 사용하면 많은 코드가 절약됨)
		  다만, 배우고 습득하기가 어렵다 (재귀함수 또는 스택을 잘 활용해야 하므로)

	BFS : 최소 레벨 (루트에 가까운 위쪽 노드)에 있는 노드를 찾을 때 DFS보다 속도가 더 빠르다.
		  이해하기가 쉽지만 소스코드가 길다.


*/

#include <iostream>

int map[6][6] =
{
	{ 0, 1, 1, 0, 0, 0 },
	{ 0, 0, 0, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 1 },
	{ 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0 }
};

char value[6] = { 'E', 'A', 'U', 'R', 'Q', 'Y' };

struct Node
{
	int num;
	int level;
};

Node queue[7] = { {0,0} };

int head = 0;
int tail = 1;

int main()
{
	while (head != tail)
	{
		Node now = queue[head];
		std::cout << value[now.num] << std::endl;

		for (int i = 0; i < 6; i++)
		{
			// 자식 노드가 있으면
			if (map[now.num][i] == 1)
			{
				queue[tail] = { i, now.level + 1 };
				std::cout << value[tail] << " : " << queue[tail].num << "," << queue[tail].level << std::endl;
				tail++;
			}
		}

		std::cout << "------------" << std::endl;

		head++;
	}

	return 0;

}