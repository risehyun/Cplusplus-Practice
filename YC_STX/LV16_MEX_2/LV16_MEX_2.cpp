#include <iostream>

using namespace std;

void run(int now);

char value[6] = "TBECD";
int map[5][5] =
{
	0,1,1,0,0,
	0,0,0,1,1,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
};

int main()
{
	run(0);

	return 0;
}

void run(int now)
{
	cout << value[now];

	for (int i = 0; i < 5; i++)
	{
		// ���� �ڽ� ��尡 �����ϸ�
		if (map[now][i] == 1)
		{
			// �� �ڽ� ���� ����.
			run(i);
		}
	}
};