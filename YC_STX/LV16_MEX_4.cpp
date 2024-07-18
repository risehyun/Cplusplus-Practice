#include <iostream>

char value[6] = "TEQWA";
char path[6] = "";

char map1D[7] = " TBECD";

int visited[5] = {};
char map1D[7] = " TBECD";

void run1D(int now)
{
	if (now >= 7 || map1D[now] == ' ')
	{
		return;
	}

	std::cout << map1D[now];

	run1D(now * 2);
	run1D(now * 2 + 1);
}

int main()
{
	path[0] = 'T';
	visited[0] = 1;
//	run(0, 0);

	return 0;
}