#include <iostream>

using namespace std;
int main()
{
	int arr[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < 5)
		{
			cout << i << "����" << arr[i] << "�� ���հ�" << endl;
		}
		else if (arr[i] >= 5)
		{
			cout << i << "����" << arr[i] << "�� �հ�" << endl;
		}
	}

	return 0;
}