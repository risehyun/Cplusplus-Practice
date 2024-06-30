#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node* left;
	Node* right;
};

int main()
{
	Node* head = new Node;
	head->data = 3;

	head->left = new Node;
	head->left->data = 7;
	head->left->left = nullptr;
	head->left->right = nullptr;

	head->right = new Node;
	head->right->data = 6;

	head->right->right = nullptr;

	head->right->left = new Node;
	head->right->left->data = 2;

	head->right->left->left = nullptr;

	head->right->left->right = nullptr;

	return 0;
}