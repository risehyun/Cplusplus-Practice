#include <iostream>

using namespace std;

int value[7] = {};

void dfs(int now)
{
	
	if (now >= 7 || value[now] == ' ')
	{
		return;
	}

//	cout << value[now];

	if (now == 2)
	{
		cout << value[now];
	}

	// ���� ���
	dfs(now * 2);

	// ������ ���
	dfs(now * 2 + 1);
}

int main()
{
	for (int i = 0; i < 7; i++)
	{
		cin >> value[i];
	}

	dfs(1);

	return 0;
}