/*
	swap을 사용한 할당 메모리 제거
	=> clear를 해도 capacity는 바뀌지 않기 때문에 메모리가 낭비된다.
	   컨테이너 객체끼리 교환할 수 있는 swap을 사용해 임시로 생성된 size와 capacity가 0인
	   컨테이너 객체와 clear한 객체를 서로 swap하면 할당된 메모리를 제거할 수 있다.
*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v(5);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	// 기본 생성자로 만든 빈 vector 컨테이너와 메모리를 해제할 v 컨테이너를 swap해준다.
	vector<int>().swap(v);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}