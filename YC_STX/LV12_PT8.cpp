#include <iostream>

using namespace std;
int main()
{
	char str1[10] = "DATAPOWER";
	char str2[9] = "";

	int a = 0, b = 0, index = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		str2[index] = str1[i];
		index++;
	}

	for (int i = 0; i < index; i++)
	{
		cout << str2[i];
	}

	return 0;
}