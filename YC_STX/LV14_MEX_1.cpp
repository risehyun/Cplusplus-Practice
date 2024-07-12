/*
	���� �����غ��� (FILO)
*/

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

// Ǫ���� ������ HEAD�� ���ŵǸ鼭 �Ʒ����� 
// ���� ������ ���� ���̴� ���·� ������ ž ���̰� ���� �þ
void push(int value)
{
	Node* buff = new Node();
	buff->data = value;
	buff->next = nullptr;
	head = buff;
}

// ��������� ���� �������� ������ NODE�� HEAD�� �ǹǷ�
// POP�� ���� �� HEAD�� ������� HEAD �ڸ��� ���� HEAD�� ��ü��
// ���� ó���� �����ߴ� NODE�� ���� �������� POP �ǹǷ� FILO�� �ȴ�.
void pop()
{
	Node* backup = head;
	head = head->next;
	delete backup;
}

int top()
{
	return head->data;
}

int main()
{
	push(1);
	push(3);
	push(2);
	push(5);

	int Top = top();

	pop();

	return 0;
}