/*
	2차원 배열 동적할당 
	https://ya-ya.tistory.com/101
	https://www.inflearn.com/questions/247285/int-mat-new-int-row-%EC%A0%9C%EA%B0%80-%EC%9E%98-%EC%9D%B4%ED%95%B4%ED%95%9C%EA%B1%B0-%EB%A7%9E%EB%82%98%EC%9A%94
*/

char value[8] = "0123456";
//char path[8] = "";
//int visited[8] = {};

#include <iostream>

using namespace std;

void run(int now, int** arr)
{
	if (now == 0)
	{
		cout << "boss:" << value[now] << " " << endl;
	}
	else
	{
		cout << "under:" << value[now] << " ";
	}
//	cout << value[now];

	for (int i = 0; i < 7; i++)
	{
		// 만약 자식 노드가 존재하면
		if (arr[now][i] == 1)
		{
		//	cout << value[now];
			// 그 자식 노드로 들어간다.
			run(i, arr);
		}
	}
}

int main()
{
	int size = 0;

	cin >> size;

	//선언하고자 하는 이차원 배열의 행의 수 만큼 동적 할당
	int** arr = new int* [size];

	//각각의 인덱스에 선언하고자 하는 배열의 크기만큼을 가르키게 함.
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	// 배열 내부 데이터 초기화
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cin >> arr[y][x];
		}
	}

	//// 디버그용 배열 전체 데이터 출력
	//for (int y = 0; y < size; y++)
	//{
	//	for (int x = 0; x < size; x++)
	//	{
	//		cout << arr[y][x];
	//	}
	//	cout << endl;
	//}

	//path[0] = '2';
	//visited[0] = 1;
	run(0, arr);

	return 0;
}