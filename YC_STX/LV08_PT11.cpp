#include <iostream>

using namespace std;

void starBox()
{
	// 1부터 20 사이의 홀수를 출력하는 함수 (for문 이용)

	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << " ";
		}
	}
}

void macDoll()
{
	// H ~ A까지 거꾸로 출력하는 함수 (for문 이용)

	for (char i = 'H'; i >= 'A'; i--)
	{
		cout << i << " ";
	}
}

void copyBean()
{
	for (int i = -5; i <= 5; i++)
	{
		cout << i << " ";
	}
}

int main()
{
	int price = 0;

	cin >> price;

	if (price >= 3500 && price <= 5000)
	{
		starBox();
	}
	else if (price >= 2500 && price <= 3500)
	{
		macDoll();
	}
	else
	{
		copyBean();
	}

	return 0;
}