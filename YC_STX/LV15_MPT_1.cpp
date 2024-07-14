#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

int index = 0;

void Enqueue(int _data)
{
	if (head == nullptr)
	{
		Node* buff = new Node();
		buff->data = _data;

		head = buff;
		tail = buff;
		index++;
	}
	else
	{
		tail->next = new Node();
		tail = tail->next;
		tail->data = _data;
	}
}

void Dequeue(int _data)
{
	if (head == nullptr)
	{
		cout << "Error";
		return;
	}


	if (_data == 0)
	{
		Node* backup = head;

		head = head->next;
		delete backup;
	}
	else
	{
		Node* backup = head;

		cout << backup->data << " ";

		head = head->next;
		delete backup;
	}

}

int main()
{
	Node queue[4];

	int targetCount = 0;

	cin >> targetCount;

	char cmd = ' ';
	int input = 0;

	for (int i = 0; i < targetCount; i++)
	{
		cin >> cmd >> input;

		if (cmd == 'E')
		{
			Enqueue(input);
		}
		else if (cmd == 'D')
		{
			Dequeue(input);
		}
	}

	for (int i = 0; i < targetCount; i++)
	{
		Dequeue(-1);
	}

	return 0;
}