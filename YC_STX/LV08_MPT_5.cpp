#include <iostream>

using namespace std;

char friends[5] = { 'E', 'W', 'A', 'B', 'C' };
char path[10] = "";
char input = ' ';

int visited[5] = {};

void run(int level)
{
	int flag = 0;

	if (level == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (path[i] == input)
			{
				flag = -1;
			}
		}

		if (flag != -1)
		{
			cout << path << endl;
		}

		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (visited[i] == 1)
		{
			continue;
		}

		visited[i] = 1;
		path[level] = friends[i];
		run(level + 1);
		path[level] = 0;
		visited[i] = 0;
	}
}


int main()
{
	cin >> input;

	run(0);

	return 0;
}