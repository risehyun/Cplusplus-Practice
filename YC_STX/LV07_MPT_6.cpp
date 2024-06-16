#include <iostream>
#include <string>

using namespace std;
int main()
{

	string str[4] = { "", "", "", "" };
	int length[4] = {};

	int maxLength = -1, minLength = 100, maxIndex = -1, minIndex = -1;

	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
		length[i] = (int)str[i].length();
	}

	for (int i = 0; i < 4; i++)
	{
		if (length[i] > maxLength)
		{
			maxLength = length[i];
			maxIndex = i;
		}

		else if (length[i] < minLength)
		{
			minLength = length[i];
			minIndex = i;
		}
	}

	cout << "긴문장:" << maxIndex << endl;
	cout << "짧은문장:" << minIndex << endl;


	return 0;
}