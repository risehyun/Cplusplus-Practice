#include <iostream>

using namespace std;

struct Node
{
	char c;
	int n;
};

void SerectSort(Node* arr, int size)
{
	// ���� ���� ���� ����
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

	// ���ڰ� ���� ��� ���� ���� ����
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

	cout << " ******* ��� ******* " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i].c << " " << arr[i].n << endl;
	}

	return 0;
}