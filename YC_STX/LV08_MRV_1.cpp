
/*
	재귀함수를 이용한 배열 shift 구현
	https://debuglog.tistory.com/124
*/

#include <iostream>

using namespace std;

int arr[5] = { 3, 5, 1, 9, 7 };
int result[5] = {};

char input = ' ';

void shiftRight()
{
	for (int i = 0; i < 4; i++)
	{
		arr[i + 1] = arr[i];
	}

//	arr[0] = arr[4];


	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

void shiftLeft()
{
	for (int i = 0; i < 4; i++)
	{
		result[i] = arr[i + 1];
	}

	result[4] = arr[0];


	for (int i = 0; i < 5; i++)
	{
		cout << result[i];
	}
	cout << endl;
}

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> input;

		if (input == 'R')
		{
			shiftRight();
		}

		if (input == 'L')
		{
			shiftRight();
		}
	}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << result[i];
	//}

	return 0;
}