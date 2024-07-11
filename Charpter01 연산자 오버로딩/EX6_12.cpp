/*
	vector의 front()와 back()

	시퀀스 컨테이너는 삽입 위치(순서) 개념이 있으므로,
	모든 시퀀스 컨테이너 vector, list, deque는 첫 번째 원소의 참조와
	마지막 원소의 참조인 front(), back() 멤버 함수를 제공한다.
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

	cout << v[0] << ", " << v.front() << endl;
	cout << v[4] << ", " << v.back() << endl;


	return 0;
}