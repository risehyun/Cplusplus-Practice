#include <iostream>

using namespace std;

void RUN(int input)
{
	int arr[3][3] = { };

	int num = 1;

	if (input < 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = num;
				num++;
			}
		}
	}
	else if (input >= 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr[i][j] = num;
				num++;
			}
		}
	}

	// 배열 요소 전체 출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}


int main()
{
	int input = 0;

	cin >> input;

	RUN(input);

	return 0;
}