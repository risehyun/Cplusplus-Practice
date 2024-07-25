// BFS ±×·¡ÇÁ

#include <iostream>
#include <queue>

char value[6] = { '0', '1', '2', '3', '4', '5' };
int map[6][6] = {};

using namespace std;

struct Node
{
	int num;
	int level;
};

std::queue<Node> q = {};
int used[6] = {};

int main()
{
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			cin >> map[y][x];
		}
	}

	q.push(Node{ 0, 0 });
	used[0] = 1;

	while (!q.empty())
	{
		Node now = q.front();

		if (now.num % 2 == 1)
		{
			cout << value[now.num] << " ";
		}

		for (int i = 0; i < 6; i++)
		{
			if (used[i] == 1)
				continue;
			if (map[now.num][i] == 0)
				continue;

			used[i] = 1;
			q.push(Node{ i, now.level + 1 });
		}

		q.pop();
	}

	return 0;
}