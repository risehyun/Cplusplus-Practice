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

		list() // 생성자 : 객체가 생성될때 (메모리에 할당될때) 자동으로 호출되는 함수
		{
			mHead = nullptr;
			mTail = nullptr;
		}

		~list() // 소멸자 : 객체가 사라질때 (메모리에 해제될때) 자동으로 호출되는 함수
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
	// stl 리스트와 똑같이 작동하는지 확인
	std::list<int> stlList;
	stlList.push_back(10);
	stlList.push_back(20);
	stlList.emplace_front(-10);

	// 만들어진 list와 비교
	ya::list<int> yaList;
	yaList.push_back(1);
	yaList.push_back(2);
	yaList.push_back(3);

	return 0;
}