
/*
	재귀함수를 이용한 배열 shift 구현
	https://debuglog.tistory.com/124
*/

#include <iostream>

using namespace std;

int arr[5] = { 3, 5, 1, 9, 7 };

char input = ' ';

void swap(int start, int end) {

	int temp = 0;

	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;

}

void shiftRight()
{
	for (int i = 4; i > 0; i--)
	{
		swap(i, i - 1);
	}
}

void shiftLeft()
{
	for (int i = 0; i < 4; i++)
	{
		swap(i, i + 1);
	}
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
			shiftLeft();
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}