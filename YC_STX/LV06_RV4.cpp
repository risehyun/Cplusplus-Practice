#include <iostream>

using namespace std;
int main()
{
	char input = ' ';

	cin >> input;

	if (input >= 'a' && input <= 'z')
	{
		cout << "소문자입력!!";
	}
	else if (input >= 'A' && input <= 'Z')
	{
		cout << "대문자입력!!";
	}
	else if (input >= '0' && input <= '9')
	{
		cout << "숫자문자입력!!";
	}

	return 0;
}