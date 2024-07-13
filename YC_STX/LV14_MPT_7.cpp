#include <iostream>

using namespace std;

struct Node
{
	int x;
	char y;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void push(int _x, char _y)
{
	if (head == nullptr)
	{
		Node* buff = new Node();
		buff->x = _x;
		buff->y = _y;

		head = buff;
		tail = buff;
	}
	else
	{
		tail->next = new Node();
		tail = tail->next;

		tail->x = _x;
		tail->y = _y;
	}
}

void pop()
{
	Node* backup = head;

	cout << backup->x << ", " << backup->y << endl;

	head = head->next;
	delete backup;
}

int main()
{

	Node queue[10];

	int inputCount = 0;
	int x = 0;
	char y = ' ';

	cin >> inputCount;

	for (int i = 0; i < inputCount; i++)
	{
		cin >> x >> y;

		push(x, y);
	}

	for (Node* p = head; p != nullptr; p = tail)
	{
		pop();
	}

	return 0;
}