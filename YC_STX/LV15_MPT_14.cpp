#include <iostream>

using namespace std;

struct Node 
{
	char data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void Add(char _data)
{
	if (head == nullptr)
	{
		head = new Node;
		head->data = _data;
		head->next = nullptr;

		tail = head;
	}
	else
	{
		tail->next = new Node;
		tail->next->data = _data;
		tail->next->next = nullptr;

		tail = tail->next;
	}
}

int main()
{

	int targetCount = 0;
	char input = ' ';

	cin >> targetCount;

	for (int i = 0; i < targetCount; i++)
	{
		cin >> input;
		Add(input);
	}

	Node* p = head;
	while (true)
	{
		if (p == nullptr)
			break;

		std::cout << p->data << " ";
		p = p->next;
	}

	return 0;
}