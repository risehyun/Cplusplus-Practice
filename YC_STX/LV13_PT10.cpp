#include <iostream>

using namespace std;

char arr[2][7] =
{
	{ 'A', 'B', 'C', 'D', 'E', 'F', 'G' },
	{ '4', '2', '5', '1', '6', '7', '3' }
};


/*

	알파벳을 인덱스로 바꾸는 법 : c1 - 'A';
	char 타입으로 저장된 숫자 문자를 int 숫자로 바꾸는 법 : ch - '0';

*/

int main()
{
	char country1 = ' ', country2 = ' ';

	int index1 = 0, index2 = 0, minIndex = 10, maxIndex = 0;

	cin >> country1 >> country2;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (arr[y][x] == country1)
			{
				index1 = arr[y][x] - 'A';
				break;
			}
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (arr[y][x] == country2)
			{
				index2 = arr[y][x] - 'A';
				break;
			}
		}
	}

	if (index1 >= index2)
	{
		maxIndex = index1;
		minIndex = index2;
	}
	else
	{
		maxIndex = index2;
		minIndex = index1;
	}

	int sum = 0;
	int temp = 0;

	for (int x = minIndex + 1; x < maxIndex; x++)
	{
		temp = arr[1][x] - '0';
		sum += temp;
	}

	cout << sum;

}