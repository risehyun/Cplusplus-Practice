#include <iostream>

using namespace std;

char path[10] = "";

void run(int level, int* count, int* input)
{
	if (level == 3)
	{
		if ((path[0] == path[1]) && (path[0] == path[2]))
		{
			return;
		}

		(*count)++;
//		cout << path << endl;
		return;
	}

	for (int i = 0; i < *input; i++)
	{
		path[level] = 'A' + i;
		run(level + 1, count, input);
		path[level] = 0;
	}
}


int main()
{
	int count = 0;
	int input = 0;

	cin >> input;

	run(0, &count, &input);

	cout << count << endl;

	return 0;
}