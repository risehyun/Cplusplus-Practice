/*
	< 반복자로 동작하는 생성자와 assign() 멤버 함수 >

	insert()와 erase() 멤버 함수 외에도 반복자로 동작하는 vector의 인터페이스로는
	생성자와 assign() 멤버 함수가 있다.

	vector의 생성자는 반복자를 통해 초기화 될 수 있고,
	assign() 멤버 함수도 반복자를 통해 할당될 수 있다.
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

	// 순차열 [v.begin(), b.end())로 v2 내부를 초기화 한다.
	vector<int> v2(v.begin(), v.end());

	// v2 출력
	vector<int>::iterator iter;
	for (iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout << *iter << " "; 
	}
	cout << endl;

	vector<int> v3;

	// v3에 순차열 [v.begin(), v.end())을 할당한다.
	v3.assign(v.begin(), v.end());

	for (iter = v3.begin(); iter != v3.end(); ++iter)
	{
		cout << *iter << " "; // v3 출력
	}
	cout << endl;

	return 0;
}