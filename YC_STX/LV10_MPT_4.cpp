#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;
};


int main()
{

	string input = "";

	Node* head = new Node;
	head->data = 'A';

	head->left = new Node;
	head->left->data = 'B';

	head->left->left = new Node;
	head->left->left->data = 'D';

	head->left->right = new Node;
	head->left->right->data = 'E';

	head->right = new Node;
	head->right->data = 'C';

	cin >> input;

	if (input == "H")
	{
		cout << head->left->data;
	}
	else if (input == "HR")
	{
		cout << head->right->data;
	}
	else if (input == "HL")
	{
		cout << head->left->data;
	}
	else if (input == "HLL")
	{
		cout << head->left->left->data;
	}
	else if (input == "HLR")
	{
		cout << head->left->right->data;
	}

	return 0;
}