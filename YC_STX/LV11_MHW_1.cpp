#include <iostream>
#include <list>

namespace rise 
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

		list()
		{
			mHead = nullptr;
			mTail = nullptr;
		}

		~list()
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
				mTail->back->data = data;
				mTail->back->back = nullptr;

				mTail = mTail->back;
			}
		}

		void push_front(T data)
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
				Node* newNode = new Node();
				newNode->data = data;
				newNode->back = mHead;

				mHead = newNode;
			}
		}

	private:
		Node* mHead;
		Node* mTail;
	};
};

int main()
{
	// stl 리스트와 똑같이 작동하는지 확인
	std::list<int> stlList;
	stlList.push_back(10);
	stlList.push_back(20);
	stlList.emplace_front(-10);

	// 만들어진 list와 비교
	rise::list<int> riseList;
	riseList.push_back(1);
	riseList.push_back(2);
	riseList.push_back(3);
	riseList.push_front(4);

	return 0;
}