#include <iostream>

using namespace std;

int input[5] = {};
int path[4] = {};


int compare()
{
	int index = 0;

	for (int i = 1; i < 4; i++)
	{
		index = i - 1;

		int result = path[index] - path[i];

		if (result < 0)
		{
			result *= -1;
		}

		cout << "**�� : �ε��� - " << index << " - �� : " << path[index] << " �� : �ε��� - " << i << " - �� : " << path[i] << " ******* ���� �� : " << result << endl;

		if (result > 3)
		{
			return 0;
		}

		index++;
	}

	return 1;

}

void run(int level, int* count)
{
	int flag = -1;

	if (level == 4)
	{
		flag = compare();

		if (flag == 1)
		{
			(*count)++;

			for (int i = 0; i < 4; i++)
			{
				cout << path[i];
			}

			cout << ": OK" << endl << endl;


			return;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				cout << path[i];
			}

			cout << ": [NO]" << endl << endl;
			return;
		}


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

	cout << "�ߺ������� �� ���� : " << count;


	return 0;
}