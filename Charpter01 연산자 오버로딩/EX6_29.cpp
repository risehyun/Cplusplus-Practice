/*
	< deque의 push_front() >
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout << dq[i] << " ";
	}
	cout << endl;

	dq.push_front(100); // 데이터를 앞쪽에 추가한다.
	dq.push_front(200); // 방금 추가한 데이터의 바로 앞에 새로운 데이터를 추가한다 (이쪽이 가장 front가 됨)

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout << dq[i] << " ";
	}
	cout << endl;

	return 0;
}