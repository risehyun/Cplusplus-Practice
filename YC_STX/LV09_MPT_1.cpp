#include <iostream>

using namespace std;


struct Node
{
	int data;
	Node* next;
};

int main()
{

	Node a;
	Node b;
	Node c;
	Node t;
	Node g;
	Node f;
	Node k;
	Node p;

	a.next = &b;
	b.next = &c;
	c.data = 3;
	t.next = &b;
	g.data = 9;
	f.data = 6;
	p.next = &k;
	p.data = 0;
	k.next = &f;


	cout << &a << endl; // a�� �� <--- ��������

	cout << &k << endl; // k�� ��

	cout << &t << endl; // t�� ��

	cout << &c << endl; // c�� �ּ�

	cout << a.data << endl; // *a

	cout << p.data << endl; // **p

	cout << &k << endl; // &k

	cout << p.next << endl; //*p

	return 0;

}