#include <iostream>

using namespace std;

char path[10] = "";

void Run(int level, int roll)
{
	if (level == roll)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 6; i++)
	{
		path[level] = '1' + i;
		Run(level + 1, roll);
		path[level] = 0;
	}
}


int main()
{
	int roll = 0;

	cin >> roll;

	Run(0, roll);

	return 0;
}