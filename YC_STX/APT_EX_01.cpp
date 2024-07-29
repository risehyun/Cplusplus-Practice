#include <iostream>

char history[5] = "";
char cards[5] = "1234";
int visited[10] = { };


void dfs(int level)
{
	if (level == 4)
	{
		std::cout << history << std::endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (visited[i] == 0)
		{
			history[level] = cards[i];
			visited[i] = 1;
			dfs(level + 1);
			visited[i] = 0;
			history[level] = 0;
		}
	}
}

// 재귀함수를 쓰지않고 모든 순열을 출력하는 소스코드
int nextPermutation(int* data, int n)
{
	// 오른쪽 왼쪽으로 a찾기 (index)
	int i = n - 1;
	while (i > 0 && data[i - 1] >= data[i]) i -= 1;
	if (i <= 0) return 0;


	// 오른쪽에서 왼쪽으로 b찾기 (index)
	int j = n - 1;
	while (data[j] <= data[i - 1]) j -= 1;

	// swap data[i-1] and data[j]
	int temp = data[i - 1];
	data[i - 1] = data[j];
	data[j] = temp;

	//a값 이후의 위치부터 전부 뒤집기
	j = n - 1;
	while (i < j)
	{
		temp = data[i];
		data[i] = data[j];
		data[j] = temp;
		i += 1;
		j -= 1;
	}

	return 1;
}


int main()
{

	dfs(0);


	std::cout << "===========nextPermutation===========" << std::endl;

	int data[4] = { 1,2,3,4 };
	int x;
	int n = 4;
	int result;

	while (true)
	{
		for (x = 0; x < 4; x++)
		{
			std::cout << data[x];
		}
		std::cout << std::endl;

		result = nextPermutation(data, n);
		if (result == 0)
			break;
	}


	return 0;
}
