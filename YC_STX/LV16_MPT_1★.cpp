/*
	2���� �迭 �����Ҵ� 
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
		// ���� �ڽ� ��尡 �����ϸ�
		if (arr[now][i] == 1)
		{
		//	cout << value[now];
			// �� �ڽ� ���� ����.
			run(i, arr);
		}
	}
}

int main()
{
	int size = 0;

	cin >> size;

	//�����ϰ��� �ϴ� ������ �迭�� ���� �� ��ŭ ���� �Ҵ�
	int** arr = new int* [size];

	//������ �ε����� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� ��.
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	// �迭 ���� ������ �ʱ�ȭ
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cin >> arr[y][x];
		}
	}

	//// ����׿� �迭 ��ü ������ ���
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