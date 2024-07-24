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

	//선언하고자 하는 이차원 배열의 행의 수 만큼 동적 할당
	int** arr = new int* [size];

	//각각의 인덱스에 선언하고자 하는 배열의 크기만큼을 가르키게 함.
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	// 배열 내부 데이터 입력받기
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