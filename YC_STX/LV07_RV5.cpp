#include <iostream>

using namespace std;
int main()
{
	char arr[3] = {};
	int count = 0;


	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];

		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			count++;
		}
	}

	if (count == 3)
	{
		cout << "ǳ���ϴ�";
	}
	else if (count == 1 || count == 2)
	{
		cout << "�����ϴ�";
	}
	else if (count == 0)
	{
		cout << "�����ϴ�";
	}

	return 0;
}