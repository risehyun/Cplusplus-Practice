#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	if (input >= '0' && input <= '9')
	{
		cout << "�����Դϴ�";
	}
	else if (input >= 'A' && input <= 'Z')
	{
		cout << "�빮���Դϴ�";
	}
	else if (input >= 65 && input <= 90)
	{
		cout << "�빮���Դϴ�";
	}
	else if (input >= 'a' && input <= 'z')
	{
		cout << "�ҹ����Դϴ�";
	}
	else if (input >= 97 && input <= 122)
	{
		cout << "�ҹ����Դϴ�";
	}

	return 0;
}