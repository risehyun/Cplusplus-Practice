#include <iostream>

using namespace std;

char path[10] = "";
void run(int level)
{
	if (level == 2)
	{
		std::cout << path;
		std::cout << std::endl;

		return;
	}

	for (size_t i = 0; i < 3; i++)
	{
		path[level] = 'A' + i;
		run(level + 1);
		path[level] = 0;
	}
}


int main()
{
	run(0);

	return 0;
}