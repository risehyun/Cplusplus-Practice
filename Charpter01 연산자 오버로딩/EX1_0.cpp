#include<iostream>

using namespace std;

int main()
{
	int n = 0, k = 0;
	int temp = 0, result = 0, count = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (count == k)
		{
			break;
		}

		temp = n % i;

		if (temp == 0)
		{
			count++;
			result = i;
		}
	}

	// n�� ��� ������ count�� k���� ���� ��찡 ���� �� �ִ�.
	// �� ��쿡�� k��° ����� �������� �ʱ� ������ ���� 0�� ����Ѵ�.
	if (count < k)
	{
		cout << 0;
	}
	// count�� k���� ū ��� �ش��ϴ� k��° ����� ������ش�.
	else
	{
		cout << result;
	}

	return 0;
}