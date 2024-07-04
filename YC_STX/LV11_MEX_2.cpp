#include <iostream>
#include <list>

namespace ya
{
	template <typename T>
	class list
	{
	public:
		struct Node
		{
			T data;
			Node* back;
		};

		list() // ������ : ��ü�� �����ɶ� (�޸𸮿� �Ҵ�ɶ�) �ڵ����� ȣ��Ǵ� �Լ�
		{
			mHead = nullptr;
			mTail = nullptr;
		}

		~list() // �Ҹ��� : ��ü�� ������� (�޸𸮿� �����ɶ�) �ڵ����� ȣ��Ǵ� �Լ�
		{

		}

		void push_back(T data)
		{
			if (mHead == nullptr)
			{
				mHead = new Node();
				mHead->data = data;
				mHead->back = nullptr;

				mTail = mHead;
			}
			else
			{
				mTail->back = new Node();
				mTail->back->back = data;
				mTail->back->back = nullptr;

				mTail = mTail->back;
			}
		}

	private:
		Node* mHead;
		Node* mTail;
	};
}

int main()
{
	// stl ����Ʈ�� �Ȱ��� �۵��ϴ��� Ȯ��
	std::list<int> stlList;
	stlList.push_back(10);
	stlList.push_back(20);
	stlList.emplace_front(-10);

	// ������� list�� ��
	ya::list<int> yaList;
	yaList.push_back(1);
	yaList.push_back(2);
	yaList.push_back(3);

	return 0;
}