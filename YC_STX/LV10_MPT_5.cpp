#include <iostream>
#include <list>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;

int main()
{
	head = new Node;

	head->next = new Node;
	head->next->data = 3;

	head->next->next = new Node;
	head->next->next->data = 5;

	head->next->next->next = new Node;
	head->next->next->next->data = 4;

	head->next->next->next->next = new Node;
	head->next->next->next->next->data = 2;

	for (Node* p = head->next; p != nullptr; p = p->next)
	{
		std::cout << p->data << " ";
	}


	return 0;
}