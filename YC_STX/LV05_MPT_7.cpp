#include <iostream>

/*

index ���� �Ѱ��� �Է¹�������

�ش� index���� 0�� index���� ��� �� ��

0�� index���� �Է¹��� index���� ��� �ϴ� ���α׷��� �ۼ� �� �ּ���.

���ȣ���� �̿��Ͽ� ������ Ǯ���ּ���.

*/

using namespace std;

void Print(int* arr, int index)
{

	
	if (index < 0)
	{
		return;
	}
	
	cout << arr[index] << " ";

	Print(arr, index - 1);

	if (index != 0)
	{
		cout << arr[index] << " ";
	}

}

int main()
{

	int arr[8] = { 3, 7, 4, 1, 9, 4, 6, 2 };

	int index = 0;

	cin >> index;

	Print(arr, index);



	return 0;
}