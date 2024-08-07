/*
	vector 반복자의 연산

	배열 기반 컨테이너인 vector와 deque는 임의 접근 반복자를 제공한다.
	임의 접근 반복자는 +, -, +=, -=, [] 연산이 가능하다.

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

	vector<int>::iterator iter = v.begin(); // 시작 원소 (10)를 가리킨다.
	cout << *iter << endl;

	iter += 2;	// +2한 위치의 원소(30)를 가리킨다.
	cout << *iter << endl;

	iter -= 1;  // -1한 위치의 원소(20)를 가리킨다.
	cout << *iter << endl;

	return 0;
}
