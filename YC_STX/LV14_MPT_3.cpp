#include <iostream>

using namespace std;

char path[10] = "";
int visited[5] = {};

void run(int level, int* target)
{
	if (level == *target)
	{
		cout << path << endl;
		return;
	}

	for (size_t i = 0; i < 4; i++)
	{
		if (visited[i] == 1)
		{
			continue;
		}

		visited[i] = 1;
		path[level] = 'A' + i;
		run(level + 1, target);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	int target = 0;

	cin >> target;

	run(0, &target);

	return 0;
}