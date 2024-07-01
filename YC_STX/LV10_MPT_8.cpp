#include <iostream>

/*
	전체 자릿수 계산 https://popawaw.tistory.com/87
	각 자리수 계산 https://travelbeeee.tistory.com/4
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

	// 1. 6자리 숫자만 입력하도록 제한하고 입력받음


	// 2. 두 번째 자리 숫자와 네 번째 자리 숫자를 추출

	int second = (result % 100) / 10;
	int fourth = (result % 10000) / 1000;

	// 3. 추출한 두 숫자를 조합해 하나의 숫자로 만듦

	int number[2] = {};
	int sum = 0;

	number[0] = fourth;
	number[1] = second;

	sum = (number[0] * 10) + number[1];

	// 4. 만들어진 두 자리 숫자에 5를 더한 값을 출력
	sum += 5;

	cout << sum;

	return 0;
}