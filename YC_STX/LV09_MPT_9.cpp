#include <iostream>

using namespace std;

char path[3] = {};

void run(int level)
{

	if (level == 3)
	{
		int win = 0, lose = 0;

		for (int i = 0; i < 3; i++)
		{
			if (path[i] == 'O')
			{
				win++;
			}
			else if (path[i] == 'X')
			{
				lose++;
			}
		}

		if (win != 0)
		{
			cout << win << "½Â";
		}

		if (lose != 0)
		{
			cout << lose << "ÆÐ";
		}

		cout << "(";

		for (int i = 0; i < 3; i++)
		{
			if (path[i] == 'O')
			{
				cout << "½Â";
			}
			else if (path[i] == 'X')
			{
				cout << "ÆÐ";
			}
		}

		cout << ")" << endl;

		return;
	}

	path[level] = 'O';
	run(level + 1);
	path[level] = 0;

	path[level] = 'X';
	run(level + 1);
	path[level] = 0;
}


int main()
{


	
	run(0);




	return 0;
}