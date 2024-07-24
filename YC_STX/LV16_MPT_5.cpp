#include <iostream>

using namespace std;

char map1D[9] = "03424103";

void dfs(int now)
{
	if (now >= 9 || map1D[now] == ' ')
	{
		return;
	}

	if (map1D[now] != '0')
	{
		std::cout << map1D[now];
	}

	// ���� ���
	dfs(now * 2);

	// ������ ���
	dfs(now * 2 + 1);
}

int main()
{

	int target = 0;
	char newData = ' ';

	cin >> target >> newData;

	map1D[target] = newData;

	dfs(1);


	return 0;
}