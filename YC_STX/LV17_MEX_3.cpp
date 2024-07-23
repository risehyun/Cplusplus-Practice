/*
	bfs �׷��� ��ȸ ���
	=> �ߺ��� ���ֱ� ���� ���� üũ
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
	// ù ������ �߰�
	queue.push(Node{ 0, 0 });
	used[0] = 1;

	while (!queue.empty())
	{
		Node now = queue.front();

		std::cout << " *** " << value[now.num] << std::endl;
	

		for (int i = 0; i < 5; i++)
		{
			// �̹� �湮�ߴ� ���ų�
			if (used[i] == 1)
				continue;
			// ���� ��尡 ���� ���� �׳� ��ŵ
			if (map[now.num][i] == 0)
				continue;

			used[i] = 1;
			std::cout << value[i] << std::endl;

			// �׷����� �ű� ��� �߰�
			queue.push(Node{ i, now.level + 1 });
		}

		std::cout << "------------" << std::endl;
		queue.pop();
	}

	return 0;
}