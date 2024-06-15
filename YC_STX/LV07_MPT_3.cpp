#include <iostream>

using namespace std;

char path[10] = "";

void run(int level, int endLevel)
{
	
	if (level == endLevel)
	{
		cout << path << endl;

		return;
	}

	path[level] = 'B';
	run(level + 1, endLevel);
	path[level] = 0;
	path[level] = 'G';
	run(level + 1, endLevel);
	path[level] = 0;
	path[level] = 'T';
	run(level + 1, endLevel);
	path[level] = 0;
	path[level] = 'K';
	run(level + 1, endLevel);
	path[level] = 0;
}


int main()
{
	int endLevel = 0;

	cin >> endLevel;


	run(0, endLevel);



	return 0;
}