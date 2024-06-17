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
		// 이미 한번 뽑았던 카드라면 1로 표시되므로 continue로 아래 코드들을 실행하지 않고 다음 for문으로 넘어감
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