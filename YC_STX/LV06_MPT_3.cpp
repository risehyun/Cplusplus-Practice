#include <iostream>

using namespace std;

int level = 0, branch = 0;

void exe(int index, int* count)
{
	(*count)++;

	if (index == level)
	{
		return;
	}

	for (int j = 0; j < branch; j++)
	{
		exe(index + 1, count);
	}

}


int main()
{
	int count = 0;

	std::cin >> level >> branch;

	exe(0, &count);

	std::cout << count << "번 재귀 함수를 호출함";

	return 0;
}