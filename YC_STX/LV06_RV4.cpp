#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	if (input >= 'a' && input <= 'z')
	{
		cout << "�ҹ����Է�!!";
	}
	else if (input >= 'A' && input <= 'Z')
	{
		cout << "�빮���Է�!!";
	}
	else if (input >= '0' && input <= '9')
	{
		cout << "���ڹ����Է�!!";
	}

	return 0;
}