#include <iostream>

using namespace std;

int result[4] = {};

void run(int _input)
{
	int a = _input / 35;
	result[0] = a;
	int temp = _input - ( 35 * a );

	int b = temp / 17;
	result[1] = b;
	temp -= (b * 17);

	int c = temp / 7;
	result[2] = c;
	temp -= (c * 7);

	int d = temp / 1;
	result[3] = d;
}

int main()
{
	int input = 0;

	cin >> input;

	run(input);

	cout << "35:" << result[0] << "개" << endl;
	cout << "17:" << result[1] << "개" << endl;
	cout << "7:" << result[2] << "개" << endl;
	cout << "1:" << result[3] << "개" << endl;

	return 0;
}