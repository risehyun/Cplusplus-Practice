/*
	bfs 그래프 순회 방법
	=> 중복을 없애기 위해 따로 체크
*/

#include <iostream>
#include <queue>

int map[5][5] =
{
	{0, 1, 0, 1, 1,},
	{0, 0, 1, 1, 0,},
	{0, 0, 0, 0, 0,},
	{0, 0, 0, 0, 1,},
	{0, 0, 0, 0, 0,},
};

char value[6] = { 'E', 'B', 'R', 'A', 'Y' };

struct Node
{
	int num;
	int level;
};

std::queue<Node> queue = {};
int used[6] = {};

int main()
{
	// 첫 진입점 추가
	queue.push(Node{ 0, 0 });
	used[0] = 1;

	while (!queue.empty())
	{
		Node now = queue.front();

		std::cout << " *** " << value[now.num] << std::endl;
	

		for (int i = 0; i < 5; i++)
		{
			// 이미 방문했던 노드거나
			if (used[i] == 1)
				continue;
			// 연관 노드가 없는 경우는 그냥 스킵
			if (map[now.num][i] == 0)
				continue;

			used[i] = 1;
			std::cout << value[i] << std::endl;

			// 그래프에 신규 노드 추가
			queue.push(Node{ i, now.level + 1 });
		}

		std::cout << "------------" << std::endl;
		queue.pop();
	}

	return 0;
}