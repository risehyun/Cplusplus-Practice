#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] = {
		{ 5, 2, 1 },
		{ 4, 7, 3 },
		{ 9, 6, 8 }
	};

	// Ȧ��, ¦��
	int even = 0, odd = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				odd++;
			}
			else
			{
				even++;
			}
		}
	}

	cout << "¦�� : " << odd << endl;
	cout << "Ȧ�� : " << even;

	return 0;
}