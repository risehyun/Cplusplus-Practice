/*
	vector의 front()와 back() 참조

	삽입 위치(순서)의 개념이 있는 모든 시퀀스 컨테이너
	vector, list, deque는 front(), back() 함수를 제공한다.
	이 함수들을 사용하여 원소의 가장 첫번째 원소 값과 마지막 원소 값을 참조해 수정할 수 있다.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v.front() = 100; // 첫번째 원소 값을 100으로 바꾼다.
	v.back() = 0;    // 마지막 원소 값을 0으로 바꾼다.

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}