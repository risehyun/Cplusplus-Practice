#include <iostream>

using namespace std;

struct Node
{
	string name;
	Node* Love1;
	Node* Love2;
};

int main()
{
	Node* head = new Node;
	Node* boss = new Node;
	Node* wife = new Node;
	Node* son = new Node;
	Node* girlfriend = new Node;
	Node* boyfriend = new Node;

	head = boss;

	boss->name = "boss";
	boss->Love1 = wife;
	boss->Love2 = son;

	wife->name = "wife";
	wife->Love1 = boss;
	wife->Love2 = son;

	son->name = "son";
	son->Love1 = girlfriend;
	son->Love2 = boyfriend;

	girlfriend->name = "girlfriend";
	girlfriend->Love1 = son;
	girlfriend->Love2 = boyfriend;

	boyfriend->name = "boyfriend";
	boyfriend->Love1 = girlfriend;
	boyfriend->Love2 = nullptr;


	// 순회에 문제가 있음
	

	//for (Node* p = head
	//	; p != nullptr
	//	; p->Love1)
	//{
	//	if (p->name == "son")
	//	{
	//		cout << p->Love1->name << endl;
	//		cout << p->Love2->name << endl;
	//	}
	//}


	return 0;
}