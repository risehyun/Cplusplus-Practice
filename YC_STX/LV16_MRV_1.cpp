#include <iostream>

using namespace std;

struct Node
{
	char c;
	int n;
};

void SerectSort(Node* arr, int size)
{
	// 먼저 문자 기준 정렬
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i].c > arr[j].c)
			{
				Node temp;

				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// 문자가 같은 경우 숫자 기준 정렬
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if ((arr[i].c == arr[j].c) && (arr[i].n > arr[j].n))
			{
				Node temp;

				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int size = 0;

	cin >> size;

	Node* arr = new Node[size];

	char cInput = ' ';
	int nInput = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> cInput >> nInput;
		arr[i].c = cInput;
		arr[i].n = nInput;
	}

	SerectSort(arr, size);

	cout << " ******* 결과 ******* " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i].c << " " << arr[i].n << endl;
	}

	return 0;
}