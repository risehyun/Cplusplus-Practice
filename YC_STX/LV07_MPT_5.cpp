#include <iostream>

using namespace std;

char path[10] = "";
int number = 0;

void run(int day)
{
	if (day == 4)
	{
		cout << path << endl;
		return;
	}

	for (size_t i = 0; i < number; i++)
	{
		path[day] = '1' + i;
		run(day + 1);
		path[day] = 0;
	}


}



int main()
{
	cin >> number;

	run(0);

	return 0;
}