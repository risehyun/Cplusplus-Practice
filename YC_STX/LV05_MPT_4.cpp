#include <iostream>

// 1, 3, 5, 7 ������ �Ű����� ����
// 7, 5, 3, 1 ������ ���

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