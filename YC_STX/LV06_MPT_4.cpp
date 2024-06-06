#include <iostream>

using namespace std;

void exe(int index, int level)
{
	cout << index << endl;

	if (index == level)
	{
		return;
	}

	for (int i = 0; i < level; i++)
	{
		exe(index + 1, level);
	}

}


int main()
{

	int level = 0;

	std::cin >> level;

	exe(0, level);

	return 0;
}