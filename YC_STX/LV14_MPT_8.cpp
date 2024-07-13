#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

// 데이터 입력 함수
void Enqueue(int _data)
{
	if (head == nullptr)
	{
		Node* buff = new Node();
		buff->data = _data;
		buff->next = nullptr;

		head = buff;
		tail = buff;
	}
	else
	{
		tail->next = new Node();
		tail = tail->next;
		tail->data = _data;
	}
}

// 데이터 출력 함수
void Dequeue()
{
	Node* backup = head;

	cout << backup->data;

	head = head->next;
	delete backup;
}

int main()
{
	Node queue[10];

	int targetCount = 0;

	cin >> targetCount;

	for (int i = 0; i < targetCount; i++)
	{
		Enqueue(1);
		Enqueue(2);
		Enqueue(3);
		Dequeue();
		Dequeue();
		Dequeue();
	}

	return 0;
}