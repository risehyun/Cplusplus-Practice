#include <iostream>

int main()
{
	//추가 확장이 매우 편리해진다.
	// 유지보수 편리성
	struct Status
	{
		int hp;
		//int mp;
	};

	Status stat;
	stat.hp = 100;
	//stat.mp = 100;

	struct Node
	{
		int data;
		Node* next;
	};

	//구조체 변수 끼리 연결하기
	Node* head;
	Node n1;
	Node n2;
	Node n3;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;

	n1.data = 1;
	n2.data = 2;
	n3.data = 3;

	std::cout << head->data;
	std::cout << head->next->data;
	std::cout << head->next->next->data;


	return 0;
}
