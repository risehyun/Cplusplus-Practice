#include <iostream>

using namespace std;

struct Node
{
	char a;
	int b;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(char _a, int _b)
{
	if (head == nullptr)
	{
		head = new Node;
		head->a = _a;
		head->b = _b;

		head->next = nullptr;

		tail = head;
	}
	else
	{
		tail->next = new Node;
		tail->next->a = _a;
		tail->next->b = _b;
		tail->next->next = nullptr;

		tail = tail->next;
	}
}

int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		addNode('A' + i, i + 1);
	}


	for (Node* p = head; p != nullptr; p = p->next)
	{
		cout << p->a << " ";
	}
	cout << endl;


	Node* p = head;

	while (true)
	{
		if (p == nullptr)
		{
			break;
		}
		else
		{
			cout << p->b << " ";
			p = p->next;
		}
	}

	return 0;
}