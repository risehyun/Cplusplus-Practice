#include <iostream>

using namespace std;
int main()
{
	char vect[100] = {};
	char flag[2] = {};

	cin >> vect;

	int length = 0, count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (vect[i] == '\0')
		{
			length = i;
			flag[0] = vect[length - 1];
			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (vect[i] == flag[0])
		{
			count++;
		}
	}

	cout << length << endl << count;



	return 0;
}