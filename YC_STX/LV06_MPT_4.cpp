#include <iostream>

using namespace std;

void exe(int index, int _level)
{
	cout << _level << endl;

	if (index == _level)
	{
		return;
	}


	exe(index + 1, _level);

}


int main()
{

	int level = 0;

	std::cin >> level;

	exe(0, level);

	return 0;
}