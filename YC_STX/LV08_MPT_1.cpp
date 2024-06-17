#include <iostream>

using namespace std;

char path[10] = "";
char input[4] = {};

int visited[5] = {};

void run(int level)
{
	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (visited[i] == 1)
		{
			continue;
		}

		visited[i] = 1;
		path[level] = input[i];
		run(level + 1);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	run(0);

	return 0;
}