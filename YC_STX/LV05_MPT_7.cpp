#include <iostream>

/*

index 숫자 한개를 입력받으세요

해당 index부터 0번 index까지 출력 한 후

0번 index부터 입력받은 index까지 출력 하는 프로그램을 작성 해 주세요.

재귀호출을 이용하여 문제를 풀어주세요.

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