/*

	<DFS VS BFS>

	DFS : ��� ��带 Ž���ؾ� �ϴ� ��쿡 BFS���� �ӵ��� ������.
		  ���� �ڵ尡 ª�� (����Լ��� ����ϸ� ���� �ڵ尡 �����)
		  �ٸ�, ���� �����ϱⰡ ��ƴ� (����Լ� �Ǵ� ������ �� Ȱ���ؾ� �ϹǷ�)

	BFS : �ּ� ���� (��Ʈ�� ����� ���� ���)�� �ִ� ��带 ã�� �� DFS���� �ӵ��� �� ������.
		  �����ϱⰡ ������ �ҽ��ڵ尡 ���.


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
			// �ڽ� ��尡 ������
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