#include <iostream>

/*
	��ü �ڸ��� ��� https://popawaw.tistory.com/87
	�� �ڸ��� ��� https://travelbeeee.tistory.com/4
*/

using namespace std;

int Run(int* digit)
{
	int input = 0, temp = 0;

	if (*digit != 6)
	{
		cin >> input;
	}

	temp = input;

	while (temp > 0)
	{
		temp /= 10;
		(*digit)++;
	}

	return input;
}

int main()
{
	int digit = 0;

	int result = Run(&digit);

	// 1. 6�ڸ� ���ڸ� �Է��ϵ��� �����ϰ� �Է¹���


	// 2. �� ��° �ڸ� ���ڿ� �� ��° �ڸ� ���ڸ� ����

	int second = (result % 100) / 10;
	int fourth = (result % 10000) / 1000;

	// 3. ������ �� ���ڸ� ������ �ϳ��� ���ڷ� ����

	int number[2] = {};
	int sum = 0;

	number[0] = fourth;
	number[1] = second;

	sum = (number[0] * 10) + number[1];

	// 4. ������� �� �ڸ� ���ڿ� 5�� ���� ���� ���
	sum += 5;

	cout << sum;

	return 0;
}