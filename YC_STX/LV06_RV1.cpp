#include <iostream>

using namespace std;
int main()
{
	char input1 = ' ', input2 = ' ';

	cin >> input1 >> input2;

	cout << "문자 '" << input1 << "'의 아스키코드값은 " << (int)input1 << endl;
	cout << "문자 '" << input2 << "'의 아스키코드값은 " << (int)input2 << endl;

	return 0;
}