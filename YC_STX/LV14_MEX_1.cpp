/*
	스택 구현해보기 (FILO)
*/

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

// 푸시할 때마다 HEAD가 갱신되면서 아래에는 
// 이전 노드들이 점점 쌓이는 형태로 데이터 탑 길이가 점차 늘어남
void push(int value)
{
	Node* buff = new Node();
	buff->data = value;
	buff->next = nullptr;
	head = buff;
}

// 결과적으로 가장 마지막에 생성된 NODE가 HEAD가 되므로
// POP할 때는 이 HEAD가 사라지고 HEAD 자리는 다음 HEAD로 대체됨
// 가장 처음에 생성했던 NODE가 가장 마지막에 POP 되므로 FILO이 된다.
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