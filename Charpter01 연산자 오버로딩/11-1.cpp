/*
	<컨테이너 어댑터>
	다른 컨테이너의 인터페이스를 변경한 컨테이너를 의미한다.
	STL에는 총 3가지의 컨테이너 어댑터 stack, queue, priority_queue 가 존재한다.

	:: 컨테이너 어댑터 1 : stack 컨테이너 ::
	
	<stack 컨테이너>

	LIFO 방식 (가장 나중에 들어온 데이터가 가장 먼저 빠져나간다. 잼통처럼 바닥이 막혀있어서 위쪽으로만 데이터가 빠져나감)
	
	기본 컨테이너는 deque 

	stack의 Container 템플릿 인자로 받는 컨테이너는 
	empty(), size(), push_back(), pop_back(), back() 등의 인터페이스를 제공해야 함

	따라서 이러한 인터페이스를 제공하는 사용자 컨테이너 또는 vector, deque(기본), list를 stack의 컨테이너로 사용 가능
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}