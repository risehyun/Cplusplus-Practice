// vector의 size(), capacity(), max_size()

/* 

	size는 저장 원소의 개수 (현재 배열 공간의 크기), 
	capacity는 실제로 할당된 메모리 크기 (오직 vector만이 제공하는 요소), 
	max_size는 현재 컴퓨터 메모리에서 최대 할당 가능한 배열의 크기를 리턴해준다 (보통 아주 큰 숫자).

	보통 capacity는 vector size가 커질 수록 size보다 약간 더 크게 할당된다.
	vector의 경우 push_back() 함수를 사용해 계속해서 뒤쪽에 데이터를 추가할 수 있는데,
	데이터를 한번 추가할 때마다 계속해서 새롭게 메모리를 재할당하고 
	이전 vector의 메모리를 새로 만들어진 vector에 복사 붙여넣기 하는 것을 반복하면
	비효율적이고 성능 저하 문제가 발생하기 때문에
	미리 약간의 (약 1.3배, 컴파일러마다 다름) 추가 공간을 capacity로 확보해두고 사용한다.

	같은 맥락에서 미리 메모리를 할당할 수 있는 reserve() 함수가 존재한다.

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

	for (vector<int>::size_type i = 0;
		i < v.size();
		++i)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.max_size() << endl;

	return 0;
}