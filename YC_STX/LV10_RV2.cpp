#include <iostream>

using namespace std;
int main()
{
	int arr[5][5] = {};
	int temp[5][5] = {};

	int num = 1;
	int input = 0;

	// �迭 ���������� ä���
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = num;
			num++;
		}
	}

	// �迭�� ȸ���� ���� �ӽ� �迭�� ����
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// B           A
			temp[j][5-i-1] = arr[i][j];
			
		}
	}

	// �ӽ� �迭 ���� ���� ���� �迭�� ����
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}

	// ���� �ϳ� �Է¹ޱ�
	cin >> input;


	// �Է� ���� ���ڿ� �ش��ϴ� ���� �Է��� ���ڷ� ��ü
	for (int i = 0; i < 5; i++)
	{
		arr[input][i] = input;
	}


	// �迭 ��� ��ü ���
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