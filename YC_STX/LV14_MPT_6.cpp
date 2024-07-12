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

	// 원래 숫자의 역순으로 노드에 저장된 값에 10씩 곱해서 기존 결과 값에 누적합 해줌
	// EX. 123 => 3-2-1 순으로 노드에 저장되어 있음
	// 이떄 첫 COUNT는 1이면 3 * 1 = 3
	// 다음 노드의 2에는 10이 곱해진 20이 누적합되어 => 23
	// 마지막으로 가장 마지막에 저장된 최고자리 숫자 1에 100이 곱해지면서 누적합 123
	// 최종적으로 RESULT에 123이 저장됨
	for (Node* p = head; p != nullptr; p = p->next)
	{
		result += (p->data) * count;
		count *= 10;
	}

	// 마지막으로 5를 더해 최종값 연산
	result += 5;

	// 결과 출력
	cout << result;

	return 0;
}