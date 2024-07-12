#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void dequeue(int end)
{
	for (int i = 0; i < end; i++)
	{
		if (head != nullptr)
		{
			Node* backup = new Node();

			backup = head;

			head = head->next;

			delete backup;
		}
	}
}

void addNode(char input)
{
	if (head == nullptr)
	{
		head = new Node();
		head->data = input;
		head->next = nullptr;

		tail = head;
	}
	else
	{
		tail->next = new Node();
		tail->next->data = input;
		tail->next->next = nullptr;

		tail = tail->next;
	}
}


int main()
{
	int target = 0;
	int dequeueTarget = 0;
	char input = ' ';

	cin >> target;
	cin >> dequeueTarget;

	for (int i = 0; i < target; i++)
	{
		cin >> input;
		addNode(input);
	}

	dequeue(dequeueTarget);

	for (Node* p = head; p != nullptr; p = p->next)
	{
		cout << p->data << " ";
	}

	return 0;
}