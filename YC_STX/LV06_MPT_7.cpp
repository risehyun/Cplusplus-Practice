#include <iostream>

using namespace std;

void exe(int length)
{
	cout << length << " ";

	if (length == 1)
	{
		return;
	}

	exe(length - 1);

	cout << length << " ";

}



int main()
{
	char str[10] = "";

	cin >> str;
	cout << endl;

	int length = strlen(str);

	exe(length);



	return 0;
}