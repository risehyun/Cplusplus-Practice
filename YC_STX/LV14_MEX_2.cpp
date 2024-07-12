/*
	큐 구현해보기 (FIFO)
*/

struct Node 
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void push(int value)
{
	if (head == nullptr)
	{
		Node* buff = new Node();
		buff->data = value;

		head = buff;
		tail = buff;
	}
	else
	{
		tail->next = new Node();
		tail = tail->next;
		tail->data = value;
	}
}

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