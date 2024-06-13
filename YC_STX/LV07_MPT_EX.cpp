#include <iostream>

char path[10] = "";
char name[10] = "JYH";
void run(int level)
{
	if (level == 5)
	{
		std::cout << path;
		std::cout << std::endl;

		return;
	}

	//path[level] = 'A';
	//run(level + 1);
	//path[level] = 0;
	//path[level] = 'B';
	//run(level + 1);
	//path[level] = 0;

	for (size_t i = 0; i < 3; i++)
	{
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;
	}
}


int main()
{
	run(0);

	return 0;
}