#include <iostream>
#include <queue>

int map[6][6] =
{
	{0, 1, 1, 0, 0, 0},
	{0, 0, 0, 1, 1, 0},
	{0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0}
};

char value[6] = { 'E', 'A', 'U', 'R', 'Q', 'Y' };

struct Node
{
	int num;
	int level;
};

std::queue<Node> queue = {};

int main()
{
	queue.push(Node{ 0, 0 });

	while (!queue.empty())
	{
		Node now = queue.front();

		std::cout << value[now.num] << std::endl;

		for (int i = 0; i < 6; i++)
		{
			if (map[now.num][i] == 1)
			{
				queue.push(Node{ i, now.level + 1 });
			}
		}

		std::cout << "------------" << std::endl;
		queue.pop();
	}

	return 0;
}