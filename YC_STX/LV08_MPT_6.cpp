#include <iostream>

using namespace std;

int input[5] = {};
int path[4] = {};

void run(int level, int* count)
{
	int flag = -1;

	if (level == 4)
	{
		for (int i = 0; i < 3; i++)
		{
			int result = path[i+1] - path[i];

			if(result > 3)
			{
				flag = 0;
			}
		}

		if (flag == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << path[i];
			}

			cout << ": OK" << endl;

			(*count)++;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				cout << path[i];
			}

			cout << ": [NO]" << endl;
		}

		return;
	}

	for (int i = 0; i < 5; i++)
	{
		path[level] = input[i];
		run(level + 1, count);
		path[level] = 0;
	}

}

int main()
{
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	run(0, &count);

	cout << count;


	return 0;
}