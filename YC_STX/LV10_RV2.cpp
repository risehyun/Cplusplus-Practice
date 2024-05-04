#include <iostream>

using namespace std;
int main()
{
	int arr[5][5] = {};
	int temp[5][5] = {};

	int num = 1;
	int input = 0;

	// 배열 정방향으로 채우기
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = num;
			num++;
		}
	}

	// 배열을 회전한 값을 임시 배열에 저장
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// B           A
			temp[j][5-i-1] = arr[i][j];
			
		}
	}

	// 임시 배열 안의 값을 실제 배열에 복사
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}

	// 숫자 하나 입력받기
	cin >> input;


	// 입력 받은 숫자에 해당하는 행을 입력한 숫자로 교체
	for (int i = 0; i < 5; i++)
	{
		arr[input][i] = input;
	}


	// 배열 요소 전체 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		
		cout << endl;

	}

	return 0;
}