#include <iostream>

void dfs(int level)
{
	if (level == 2)
	{
		return;
	}

	dfs(level + 1);
	dfs(level + 1);

	std::cout << level;

}

int main()
{
	dfs(0);

	return 0;
}