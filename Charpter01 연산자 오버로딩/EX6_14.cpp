/*
	vector의 []연산자와 at() 멤버 함수

	시퀀스 컨테이너 중 배열 기반 컨테이너인 vector와 deque는 일반 배열처럼
	임의 위치의 원소를 참조하는 두 인터페이스를 제공한다.

	이것이 바로 []연산자와 at() 멤버 함수이다.

	두 인터페이스의 기능은 서로 같지만, 범위 점검 유무에서 차이가 있다.

	[] 연산자의 경우 범위 점검을 하지 않아 속도가 빠르다.
	반면 at() 멤버 함수의 경우 접근하려는 범위가 유효한지 점검을 하므로 속도는 느리지만 안전하다.
	만약 at() 멤버 함수가 접근하려는 범위가 유효하지 않은 경우, 범위 오류인 out_of_range 예외가 발생한다.

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

	v[0] = 100; // 범위 점검 없는 0 index 원소의 참조
	v[4] = 500; // 범위 점검 없는 4 index 원소의 참조

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// 범위 점검 있는 index 원소의 참조
	v.at(0) = 1000;
	v.at(4) = 5000;
//	v.at(5) = 0;

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}