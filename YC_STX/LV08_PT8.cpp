#include <iostream>

using namespace std;
int main()
{
	char arr[6] = { '#', '-', '#', '-', '#', '#' };

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == '#')
		{
			cout << "¼¥";
		}
		else if (arr[i] == '-')
		{
			cout << "¹«";
		}
	}

	return 0;
}