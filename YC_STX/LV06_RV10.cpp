#include <iostream>

using namespace std;
int main()
{
	char arr[3] = { ' ' };

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	if (arr[0] > arr[1] && arr[0] > arr[2])
	{
		cout << "�Ǵ�" << arr[0];
	}
	else
	{
		cout << "��������";
	}

	return 0;
}