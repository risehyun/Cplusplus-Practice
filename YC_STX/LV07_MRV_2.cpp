#include <iostream>

using namespace std;

char path[10] = "";

void run(int level, int input)
{
	if (level == input)
	{
		cout << path << endl;

		return;
	}

	path[level] = 'X';
	run(level + 1, input);
	path[level] = 0;

	path[level] = 'O';
	run(level + 1, input);
	path[level] = 0;
}


int main()
{
	int input = 0;

	cin >> input;

	run(0, input);


	return 0;
}