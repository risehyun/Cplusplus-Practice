#include <iostream>

using namespace std;

char member[5] = { 'B', 'T', 'S', 'K', 'R' };
char path[10] = "";
int visited[5] = {};

void run(int level, int* memberCount, int* count)
{
	// �Է¹��� ��� ����ŭ ���� ����
	if (level == *memberCount)
	{
		for (int i = 0; i < level; i++)
		{
			if (path[i] == 'S')
			{
				(*count)++;
			}
		}

	//	cout << path << endl;
		return;
	}

	// ��ü ��� ����ŭ �����̼�
	for (int i = 0; i < 5; i++)
	{
		if (visited[i] == 1)
		{
			continue;
		}

		visited[i] = 1;
		path[level] = member[i];
		run(level + 1, memberCount, count);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	int memberCount = 0;
	int count = 0;

	cin >> memberCount;

	run(0, &memberCount, &count);

	cout << count;


	return 0;
}