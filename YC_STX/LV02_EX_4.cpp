/*
	���� �÷��� ��� �Լ��� �̿��� ��� ����
*/

#include <iostream>

int arr[5] = { 1, 5, 1, 5, 3 };
int input[3] = { 1, 2, 3 };

int isExist(int data)
{
	for (size_t x = 0; x < 5; x++)
	{
		if (arr[x] == data)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	for (size_t y = 0; y < 3; y++)
	{
		int flag = isExist(input[y]);

		if (flag == 1)
		{
			std::cout << "���� O";
		}
		else
		{
			std::cout << "���� X";
		}
	}

	return 0;
}