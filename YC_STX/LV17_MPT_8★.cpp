#include <iostream>
#include <queue>

using namespace std;

char value[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'F', 'I', 'J' };

int map[10][10] =
{
//    A  B  C  D  E  F  G  H  I  J
	{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, // A
	{ 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 }, // B
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // C
	{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }, // D
	{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // E
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // F
	{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, // G
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // H
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // I
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }  // J
};

struct Node
{
	int num;
	int level;
};

std::queue<Node> q = {};

int main()
{
	char input = 0;
	int index = 0;

	cin >> input;

	for (int i = 0; i < 10; i++)
	{
		if (value[i] == input)
		{
			index = i;
		}
	}

	q.push(Node{ 0, 0 });

	while (!q.empty())
	{
		Node now = q.front();

		std::cout << value[now.num] << std::endl;
		std::cout << "------------" << std::endl;

		for (int i = 0; i < 10; i++)
		{
			if (map[now.num][i] == 1)
			{
				q.push(Node{ i, now.level + 1 });
			}
		}

		q.pop();
	}

	return 0;
}