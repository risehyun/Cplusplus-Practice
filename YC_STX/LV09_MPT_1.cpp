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


	cout << &a << endl; // a의 값 <--- 예시정답

	cout << &k << endl; // k의 값

	cout << &t << endl; // t의 값

	cout << &c << endl; // c의 주소

	cout << a.data << endl; // *a

	cout << p.data << endl; // **p

	cout << &k << endl; // &k

	cout << p.next << endl; //*p

	return 0;

}