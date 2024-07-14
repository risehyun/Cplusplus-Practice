#include <iostream>

using namespace std;

int main()
{
	int map[4][4] =
	{
		0, 0, 1, 1,
		1, 0, 1, 1,
		0, 1, 0, 0,
		0, 0, 0, 0,
	};

	int target = 0;

	for (size_t i = 0; i < 4; i++)
	{
		if (map[target][i] != 0)
		{
			cout << i << "¹ø" << endl;
		}
	}

	return 0;
}