/*
	<const와 반복자>

	const 키워드와 반복자를 정리해보자.

	1. vector<int>::iterator iter 
	=> iter는 다음 원소로 이동 가능하면서 동시에 원소의 변경이 가능한 반복자이다.

	2. vector<int>::const_iterator citer
	=> citer는 다음 원소로 이동은 가능하지만 원소의 변경은 불가능한 반복자이다.

	3. const vector<int>::const_iterator citer_const
	=> citer_const는 다음 원소로 이동도 불가능하고 원소의 변경도 불가능한 반복자이다.

	** 포인터와 연결해서 학습하면 쉽다
	** iterator와 const_iterator만 주로 사용되므로 둘을 숙지하도록 하자

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int arr[5] = { 10, 20, 30, 40, 50 };

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	int* p = arr;
	cout << *iter << ", " << *p << endl;

	vector<int>::const_iterator citer = v.begin();
	int* const cp = arr;
	cout << *citer << ", " << *cp << endl;

	const vector<int>::iterator iter_const = v.begin();
	int* const p_const = arr;
	cout << *iter_const << ", " << *p_const << endl;

	const vector<int>::const_iterator citer_const = v.begin();
	const int* const cp_const = arr;
	cout << *citer_const << ", " << *cp_const << endl;

	return 0;
}