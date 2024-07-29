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

// ����Լ��� �����ʰ� ��� ������ ����ϴ� �ҽ��ڵ�
int nextPermutation(int* data, int n)
{
	// ������ �������� aã�� (index)
	int i = n - 1;
	while (i > 0 && data[i - 1] >= data[i]) i -= 1;
	if (i <= 0) return 0;


	// �����ʿ��� �������� bã�� (index)
	int j = n - 1;
	while (data[j] <= data[i - 1]) j -= 1;

	// swap data[i-1] and data[j]
	int temp = data[i - 1];
	data[i - 1] = data[j];
	data[j] = temp;

	//a�� ������ ��ġ���� ���� ������
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
