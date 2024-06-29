/* ��ũ�帮��Ʈ ���� ���� */

#include <iostream>
#include <list>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

// 0 == null == nullptr ��������� �����Ϳ��� nullptr�� �Ἥ �����Ͷ� ���� �и��ϰ� ��Ÿ�� �� �ִ�.
Node* head = nullptr;
Node* tail = nullptr;

void AddNode(int data)
{
	// ���� ��尡 ����ִ� ��� �ƹ��͵� ���� �����̱� ������ ���� ��忡�� ���� �����͸� �߰� ���ش�.
	if (head == nullptr)
	{
		head = new Node;
		head->data = data;
		head->next = nullptr;
	}
	else
	{
		// ���� ��尡 ������� ���� ��� next�� ������ ���ο� ��带 �ϳ� �߰��ϰ�
		// ���� �������� �߰��� �ش� ��忡 ���Ӱ� �߰��� �����͸� �Ҵ����ָ� �ȴ�.
		tail->next = new Node;
		tail->next->data = data;
		tail->next->next = nullptr;

		// next ��� ���� tail�� ������ ���� �߰��� next�� �ǵ��� �Ͽ� ������
		tail = tail->next;
	}

}

int main()
{
	AddNode(3);
	AddNode(4);
	AddNode(5);

	//while, for ���� Ȱ���� linked list ��ȸ
	//Node* p = head;
	//while (true)
	//{
	//	if (p == nullptr)
	//		break;

	//	std::cout << p->data;
	//	p = p->next;
	//}

	// for���� �̿��� ��ȸ
	// ������ �����͸� �ϳ� ����� head�� �Ҵ��ϰ�, ����Ʈ�� ������ tail�� next�� nullptr��� ���� ����ؼ�
	// ó������ ������ ��ȸ�Ѵ�.
	for (Node* p = head; p != nullptr; p = p->next)
	{
		std::cout << p->data;
	}

	return 0;
}