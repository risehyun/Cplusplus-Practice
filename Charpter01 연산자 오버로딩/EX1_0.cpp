#include <iostream>

int arr[9] = { 0, };
bool visited[9] = { false, };

using namespace std;
void dfs(int num, int cnt, int n, int m)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';

		cout << '\n';
		return;
	}

	for (int i = num; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			dfs(i + 1, cnt + 1, n, m);
			visited[i] = false;
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	dfs(1, 0, n, m);
}