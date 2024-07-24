#include <iostream>

using namespace std;

char value[9] = "";
int map[8][8] = {};

void dfs(int now, int level)
{
	cout << value[now];

	for (int i = 0; i < 8; i++)
	{
		if (map[now][i] == 1)
		{
			dfs(i, level + 1);
		}
	}
}

int main()
{

	for (int i = 0; i < 8; i++)
	{
		cin >> value[i];
	}

	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			cin >> map[y][x];
		}
	}

	cout << "********* °á°ú **********" << endl;

	dfs(0, 0);


	return 0;
}