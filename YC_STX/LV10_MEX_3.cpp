/* 링크드리스트 구현 예제 */

#include <iostream>
#include <list>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

// 0 == null == nullptr 비슷하지만 포인터에는 nullptr을 써서 포인터란 것을 분명하게 나타낼 수 있다.
Node* head = nullptr;
Node* tail = nullptr;

void AddNode(int data)
{
	// 만약 헤드가 비어있는 경우 아무것도 없는 상태이기 때문에 먼저 헤드에서 부터 데이터를 추가 해준다.
	if (head == nullptr)
	{
		head = new Node;
		head->data = data;
		head->next = nullptr;
	}
	else
	{
		// 현재 헤드가 비어있지 않은 경우 next에 지정될 새로운 노드를 하나 추가하고
		// 가장 마지막에 추가된 해당 노드에 새롭게 추가할 데이터를 할당해주면 된다.
		tail->next = new Node;
		tail->next->data = data;
		tail->next->next = nullptr;

		// next 대신 기존 tail의 꼬리는 새로 추가된 next가 되도록 하여 마무리
		tail = tail->next;
	}

}

int main()
{
	AddNode(3);
	AddNode(4);
	AddNode(5);

	//while, for 문을 활용한 linked list 순회
	//Node* p = head;
	//while (true)
	//{
	//	if (p == nullptr)
	//		break;

	//	std::cout << p->data;
	//	p = p->next;
	//}

	// for문을 이용한 순회
	// 임의의 포인터를 하나 만들어 head를 할당하고, 리스트의 마지막 tail의 next는 nullptr라는 점을 사용해서
	// 처음부터 끝까지 순회한다.
	for (Node* p = head; p != nullptr; p = p->next)
	{
		std::cout << p->data;
	}

	return 0;
}