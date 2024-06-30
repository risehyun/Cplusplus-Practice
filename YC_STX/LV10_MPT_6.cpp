#include <iostream>

using namespace std;

char input[5] = {};

struct Node
{
	char data;
	Node* next;
};


int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	Node* head = new Node;
	head->data = 0;
	
	head->next = new Node;
	head->next->data = 'Q';

	head->next->next = new Node;
	head->next->next->data = 'T';

	head->next->next->next = new Node;
	head->next->next->next->data = 'P';

	head->next->next->next->next = new Node;
	head->next->next->next->next->data = 'K';

	head->next->next->next->next->next = new Node;
	head->next->next->next->next->next->data = 'Q';
	head->next->next->next->next->next->next = nullptr;

	for (Node* p = head
		; p != nullptr
		; p = p->next)
	{
		if (p->next == nullptr)
		{
			cout << p->data;
		}
	}

	return 0;
}