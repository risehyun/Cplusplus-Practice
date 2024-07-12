/*
	< erase() 멤버 함수>

	특정 위치의 원소를 제거하려면 erase 멤버 함수를 사용한다.
	erase는 반복자를 사용하여 원소를 한 개 혹은 여러 개 제거할 수 있다.
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
	vector<int>::iterator iter2;

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = v.begin() + 2; // 30이 있는 메모리 주소를 가리키게 됨
	// iter가 가리키는 위치의 원소를 제거. iter2는 다음 원소 40

	iter2 = v.erase(iter); // iter에 있는 주소 속 값인 30을 삭제하기 때문에 
	iter = v.begin() + 2;  // iter에는 다음값인 40이 담기게 됨

	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// [v.begin() + 1, v.end()) 구간의 원소를 제거
	iter2 = v.erase(v.begin() + 1, v.end()); // iter2는 다음 원소 v.end()

	// begin() + 1부터 끝까지의 원소를 모두 지웠으므로 첫번째 원소인 10만 남아서 출력된다.
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";	
	}
	cout << endl;

	return 0;
}