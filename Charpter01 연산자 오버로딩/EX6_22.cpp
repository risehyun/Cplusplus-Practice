/*
	< insert() 멤버 함수의 활용 >

	insert() 멤버 함수를 사용하면 
	반복자가 가리키는 위치에
	원소 (값) 을 추가할 수 있다.

	또한 erase() 멤버 함수를 사용하면 
	반복자가 가리키는 위치의 원소를 제거할 수 있다.
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
	vector<int>::iterator iter2;

	
	// iter2는 삽입한 정수를 가리키는 반복자
	// insert(iter, 100) => iter가 가리키는 위치에 정수 100을 삽입
	iter2 = v.insert(iter, 100);

	for (iter = v.begin(); iter != v.end(); ++iter) 
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "iter2: " << *iter2 << endl;

	return 0;
}