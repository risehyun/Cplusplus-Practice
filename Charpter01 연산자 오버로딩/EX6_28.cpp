/*
	< vector와 deque 비교>

	vector와 deque는 모두 배열 기반 컨테이너이면서 시퀀스 컨테이너라는 공통점이 있다.
	제공하는 멤버 함수(사용 인터페이스)와 실행 결과까지 모두 같다.

	한가지 둘의 차이점은 메모리 할당 정책에 있다.

	vector의 경우 하나의 메모리 블록을 할당하기 때문에 원소를 추가할 때 새로운 메모리리 덩어리 하나를 추가하고
	추가된 메모리에 이전 메모리 내부의 데이터를 복사 붙여넣기 하여 성능이 저하되는 문제가 있었다.

	deque의 경우에는 하나의 메모리 블록이 아닌 여러개의 메모리 블록을 사용해 원소 추가시 데이터를 복사 붙여넣기 하지 않고
	아예 다른 메모리 블록 하나를 추가하고 데이터의 수가 적은 방향으로 앞, 또는 뒤로 필요한 만큼만 데이터를 밀어 낸다.

	따라서 vector와 달리 deque는 데이터를 push할때 front, back 모두 사용이 가능하다
	데이터를 필요한 만큼 밀어내서 자리를 다시 잡아주기 때문에 완전히 vector의 메모리 재할당, 복사붙여넣기로 인한 성능 저하를
	커버하는 방식이라곤 할 수 없지만 성능적으로 따졌을 때 vector보다는 효율적으로 동작하게 된다.

*/

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	vector<int> v(4, 100); // 100으로 초기화 한 4개의 원소를 갖는 컨테이너 v
	deque<int> dq(4, 100); // 100으로 초기화 한 4개의 원소를 갖는 컨테이너 dq

	v.push_back(200);      // vector에 200 추가
	dq.push_back(200);     // deque에 200 추가

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout << dq[i] << " ";
	}
	cout << endl;

	return 0;
}