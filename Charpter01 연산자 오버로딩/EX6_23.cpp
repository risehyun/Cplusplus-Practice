/*
	< 다른 버전의 insert() 멤버 함수 >

	vector는 여러 개의 원소를 한 번에 삽입하는 버전의 insert() 멤버 함수와
	반복자 쌍(구간)을 사용히하여 원소를 삽입할 수 있는 버전의 insert() 멤버 함수를 제공한다.
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

	vector<int>::iterator iter = v.begin() + 2;

	// iter가 가리키는 위치에 정수 100을 3개 삽입한다.
	v.insert(iter, 3, 100);

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);

	iter = v2.begin() + 1;
	// iter가 가리키는 위치에 [v.begin, b.end()) 구간의 원소를 삽입한다.
	v2.insert(iter, v.begin(), v.end());

	for (iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}