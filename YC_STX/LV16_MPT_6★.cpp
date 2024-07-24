#include <iostream>

using namespace std;

char path[10] = "";
int visited[9] = {};
char value[10] = "012345678";

void run(int now, int level, int size, int** arr)
{
	//if (level == 3)
	//{
	cout << value[now];
	//	return;
//	}

	for (int i = 0; i < size; i++)
	{
		if (arr[now][i] == 1
			&& visited[i] == 0)
		{
			path[level + 1] = value[i];
			visited[i] = 1;
			run(now, level + 1, size, arr);
			path[level + 1] = 0;
		}
	}
}

int main()
{
	int size = 0;

	cin >> size;

	int** arr = new int* [size];

	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cin >> arr[y][x];
		}
	}

	run(0, 0, size, arr);

	return 0;
}