#include <iostream>

using namespace std;


struct Node
{
	int x;
	Node* next;
};

int main()
{
	Node a, b, c;

	a.x = 3;
	b.x = 5;
	c.x = 4;

	a.next = &b;
	b.next = &c;

	return 0;
}