#include <iostream>

using namespace std;

char input[4] = {};
char path[10] = {};

void run(int level, int* count)
{
	if (level == 4)
	{
		cout << *count << endl;
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (level >= 2)
		{
			if ((path[level - 2] == 'T' && path[level - 1] == 'B')
				|| (path[level - 2] == 'B' && path[level - 1] == 'T'))
			{
				continue;
			}
		}

		(*count)++;
		path[level] = input[i];
		run(level + 1, count);
		path[level] = 0;
	}


}


int main()
{

	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	run(0, &count);

	return 0;
}