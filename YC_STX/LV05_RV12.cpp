#include <iostream>

using namespace std;
int main()
{
	int arr[5] = { 0 };

	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "���� " << sum << "�Դϴ�";

	return 0;
}