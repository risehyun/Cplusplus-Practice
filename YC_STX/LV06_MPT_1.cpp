#include <iostream>

using namespace std;

void exe(int level)
{
	if (level == 2)
	{
		return;
	}

	exe(level + 1);
	exe(level + 1);
	exe(level + 1);
}


int main()
{
	exe(0);

	cout << "³¡!";

	return 0;
}