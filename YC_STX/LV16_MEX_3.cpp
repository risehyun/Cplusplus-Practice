#include <iostream>

char value[6] = "TEQWA";
char path[6] = "";

int map[5][5] =
{
	0,1,1,0,0,
	0,0,0,1,1,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
};

int visited[5] = {};
char map1D[7] = " TBECD";

void run(int now, int level)
{
	std::cout << value[now];

	for (size_t i = 0; i < 5; i++)
	{
		if (map[now][i] == 1
			&& visited[i] == 0)
		{
			path[level + 1] = value[i];
			visited[i] = 1;
			run(i, level + 1);
			path[level + 1] = 0;
		}
	}
}

int main()
{
	path[0] = 'T';
	visited[0] = 1;
	run(0, 0);

	return 0;
}