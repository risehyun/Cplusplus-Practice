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

	// ���� �ϳ��� �Է������� (11 ~ 36 ���� ����)

	int input = 0;

	cin >> input;

	while (input > 36 || input < 11)
	{
		cin >> input;
	}

	// �Է¹��� ��ȣ�� �ش��ϴ� ���� ���� ��� 4���� ��������ּ���.
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