#include <iostream>

using namespace std;

int level = 0;
int branch = 0;

char path[10] = "";

void run(int now)
{
	if (level == now)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < branch; i++)
	{
		path[now] = '0' + i;
		run(now + 1);
		path[now] = 0;
	}

}


int main()
{
	cin >> level >> branch;

	run(0);

	return 0;
}