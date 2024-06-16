#include <iostream>

using namespace std;

char path[10] = "";
char targetPath[3] = "";

int run(int level, int count)
{

	if (targetPath != path)
	{
		count++;
	}

	if (level == 3)
	{
		cout << path << endl;
		return count;
	}

	for (int i = 0; i < 4; i++)
	{
		path[level] = 'A' + i;
		run(level + 1, count);
		path[level] = 0;
	}

}


int main()
{

	cin >> targetPath;

	int result = run(0, 0);

	cout << result << "¹øÂ°";



	return 0;
}