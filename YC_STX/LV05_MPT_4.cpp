#include <iostream>

// 1, 3, 5, 7 순으로 매개변수 전달
// 7, 5, 3, 1 순으로 출력

void abc(int x)
{
	if (x == 9)
	{
		return;
	}

	abc(x + 2);

	std::cout << x;
}

int main()
{
	abc(1);

	return 0;
}