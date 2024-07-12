#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(int data)
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
		Node* buff = new Node;
		buff->data = data;
		buff->next = head;

		head = buff;
	}
}

int main()
{
	string str = "";

	int result = 0;
	int count = 1;

	cin >> str;
	int strLength = str.length();

	for (int i = 0; i < strLength; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			addNode((int)(str[i] - 48));
		}
	}

	// ���� ������ �������� ��忡 ����� ���� 10�� ���ؼ� ���� ��� ���� ������ ����
	// EX. 123 => 3-2-1 ������ ��忡 ����Ǿ� ����
	// �̋� ù COUNT�� 1�̸� 3 * 1 = 3
	// ���� ����� 2���� 10�� ������ 20�� �����յǾ� => 23
	// ���������� ���� �������� ����� �ְ��ڸ� ���� 1�� 100�� �������鼭 ������ 123
	// ���������� RESULT�� 123�� �����
	for (Node* p = head; p != nullptr; p = p->next)
	{
		result += (p->data) * count;
		count *= 10;
	}

	// ���������� 5�� ���� ������ ����
	result += 5;

	// ��� ���
	cout << result;

	return 0;
}