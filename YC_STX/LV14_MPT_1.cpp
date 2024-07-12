#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(int data)
{
	if (head == nullptr)
	{
		head = new Node;
		head->data = data;
		head->next = nullptr;

		tail = head;
	}
	else
	{
		tail->next = new Node;
		tail->next->data = data;
		tail->next->next = nullptr;

		tail = tail->next;
	}
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 1; i <= 4; i++)
	{
		addNode(i * input);
	}

	Node* h = head;

	while (true)
	{
		if (h == nullptr)
		{
			break;
		}
		else
		{
			std::cout << h->data << " ";
			h = h->next;
		}
	}


	//Node* p = head;

	//for (Node* p = head; p != nullptr; p = p->next)
	//{
	//	cout << p->data;
	//}

}