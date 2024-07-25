#include <iostream>

using namespace std;

string map1D = "";
int length = 0;

void dfs(int now)
{
	// �������
	if (now >= length || map1D[now] == ' ')
	{
		return;
	}

	if (map1D[now] >= 'A' && map1D[now] <= 'Z')
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
	cin >> map1D;

	length = map1D.length();

	dfs(1);

	return 0;
}