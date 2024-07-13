#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] =
	{
		{ 3, 5, 1, 4 },
		{ 2, 2, 1, 1 },
		{ 0, 1, 2, 3 },
		{ 3, 1, 3, 1 }
	};

	char input = ' ';

	cin >> input;

	cout << input << endl;

	// 입력받은 값이 숫자인 경우
	if (input < 'A')
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[(int)(input) - '0'][x] << " ";
		}
	}
	// 입력받은 값이 문자인 경우
	else
	{
		for (int y = 0; y < 4; y++)
		{
			cout << arr[y][(int)(input) - 'A'] << " ";
		}
	}

	return 0;
}