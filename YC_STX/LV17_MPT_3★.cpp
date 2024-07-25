#include <iostream>

using namespace std;

struct Node 
{
	char data;
	Node* left;
	Node* right;
};

Node* head = nullptr;

void addNode(char data)
{
	if (head == nullptr)
	{
		head = new Node();
		head->left = new Node();
		head->right = new Node();

		head->data = data;
	}
	else
	{

	}

}

int main()
{
	char input = ' ';

	for (int i = 0; i < 6; i++)
	{
		cin >> input;

		addNode(input);
	}

	for (Node* p = head; p != nullptr; p = p->left)
	{
		std::cout << p->data;
	}

	return 0;
}