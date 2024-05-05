#include <iostream>

using namespace std;

struct BBQ
{
	int x;
	int data[3];
};

int main()
{
	BBQ g;
	int sum = 0;

	cin >> g.x;

	for (int i = 0; i < 3; i++)
	{
		cin >> g.data[i];
		sum += g.data[i];
	}

	cout << sum << " " << g.x;

	return 0;
}