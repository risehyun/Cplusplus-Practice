#include <iostream>

using namespace std;

char path[5] = "";
int visited[5] = {};

void test(int level)
{
	if (level == 3)
	{
		if (level >= 2 && path[level - 2] == path[level - 1])
		{
			return;
		}

		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		// �̹� �ѹ� �̾Ҵ� ī���� 1�� ǥ�õǹǷ� continue�� �Ʒ� �ڵ���� �������� �ʰ� ���� for������ �Ѿ
		if (visited[i] == 1)
		{
			continue;
		}

		visited[i] = 1;
		path[level] = 'A' + i;
		test(level + 1);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	test(0);

	return 0;
}