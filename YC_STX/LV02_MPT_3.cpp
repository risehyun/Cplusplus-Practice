#include <iostream>

using namespace std;
int main()
{
	int arr[8] = { 5, 9, 4, 6, 1, 5, 8, 9 };

	int standard = 0, target = 0;

	int offset = 0;

	cin >> standard >> target;
	
	for (int i = standard; i < 8; i++)
	{
		if (arr[i] != target)
		{
			offset++;
		}
		else
		{
			break;
		}
	}

	cout << offset;

	return 0;
}