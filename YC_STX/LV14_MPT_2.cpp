#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(char data)
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

	// 숫자 하나를 입력으세요 (11 ~ 36 까지 숫자)

	int input = 0;

	cin >> input;

	while (input > 36 || input < 11)
	{
		cin >> input;
	}

	// 입력받은 번호에 해당하는 문자 부터 노드 4개만 연결시켜주세요.
	for (int i = input; i < input + 4; i++)
	{
		addNode((char)i + 54);
	}

	Node* p = head;

	for (Node* p = head; p != nullptr; p = p->next)
	{
		cout << p->data;
	}

	return 0;
}