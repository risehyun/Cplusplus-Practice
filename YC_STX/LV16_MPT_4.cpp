#include <iostream>

using namespace std;

int visited[9] = {};
char value[8] = "0123456";
char path[9] = "";

void dfs(int now, int level, int** arr)
{
	cout << value[now];

	for (int i = 0; i < 9; i++)
	{
		if (arr[now][i] == 1
			&& visited[i] == 0)
		{
			path[level + 1] = value[i];
			visited[i] = 1;
			dfs(i, level + 1, arr);
			path[level + 1] = 0;
		}
	}
}

int main()
{

	int size = 0;

	cin >> size;

	//�����ϰ��� �ϴ� ������ �迭�� ���� �� ��ŭ ���� �Ҵ�
	int** arr = new int* [size];

	//������ �ε����� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� ��.
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	// �迭 ���� ������ �Է¹ޱ�
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cin >> arr[y][x];
		}
	}

	cout << "******************" << endl;

	dfs(0, 0, arr);

	return 0;
}