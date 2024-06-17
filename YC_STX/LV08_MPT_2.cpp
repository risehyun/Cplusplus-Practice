#include <iostream>

using namespace std;

char input[4] = {};
char path[10] = {};

void run(int level, int* count)
{
	if (level == 4)
	{
		if (!((path[0] == 'T' && path[1] == 'B')
			|| (path[0] == 'B' && path[1] == 'T')
			|| (path[1] == 'T' && path[2] == 'B')
			|| (path[1] == 'B' && path[2] == 'T')
			|| (path[2] == 'T' && path[3] == 'B')
			|| (path[2] == 'B' && path[3] == 'T')
			))
		{
			(*count)++;

		}

		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
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

	cout << count << endl;

	return 0;
}