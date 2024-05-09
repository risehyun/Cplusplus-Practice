#include <iostream>

using namespace std;
int main()
{
	/*
	
	그리고 그 문자를 **가르키는** 포인터 2개를 만들어주세요

	포인터만을 이용하여 두개의 char변수를 SWAP 하고 출력 해 주세요
	
	*/

	char input[2] = {};
	char temp = ' ';

	for (int i = 0; i < 2; i++)
	{
		cin >> input[i];
	}

	char* a = &input[0];
	char* b = &input[1];

	temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << " " << *b;

	return 0;
}