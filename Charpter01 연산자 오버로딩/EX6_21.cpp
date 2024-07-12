/*
	<iterator와 reverse_iterator>

	iterator(정방향 반복자)와 반대로 동작하는 반복자가 필요하다면
	reverse_iterator(역방향 반복자)를 사용한다.

	원소의 순차열을 iterator의 begin()과 end()로 표현하듯이
	원소의 역순차열은 reverse_iterator의 rbegin()과 rend()로 표현할 수 있다.

	[rbegin(), rend()) 라고도 표기할 수 있다.
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

	vector<int>::iterator iter;
	vector<int>::reverse_iterator riter;

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	for (riter = v.rbegin(); riter != v.rend(); ++riter)
	{
		cout << *riter << " ";
	}
	cout << endl;

	return 0;
}