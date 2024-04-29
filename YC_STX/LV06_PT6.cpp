#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	if (input >= '0' && input <= '9')
	{
		cout << "숫자입니다";
	}
	else if (input >= 'A' && input <= 'Z')
	{
		cout << "대문자입니다";
	}
	else if (input >= 65 && input <= 90)
	{
		cout << "대문자입니다";
	}
	else if (input >= 'a' && input <= 'z')
	{
		cout << "소문자입니다";
	}
	else if (input >= 97 && input <= 122)
	{
		cout << "소문자입니다";
	}

	return 0;
}