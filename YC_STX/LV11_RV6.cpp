#include <iostream>

using namespace std;

void CompareGo(int arr1[5], int arr2[5])
{
	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] != arr2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		cout << "�ι迭����������";
	}
	else
	{
		cout << "�ι迭����������";
	}

}


int main()
{
	int arr1[5] = { 3, 5, 1, 2, 7 };
	int arr2[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	CompareGo(arr1, arr2);

	return 0;
}