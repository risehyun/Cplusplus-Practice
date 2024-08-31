/*
	map의 [] 연산자
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> m;

	// [] 연산자를 사용하여 map의 key로 접근한다.
	// 이때 해당하는 key가 map에 존재하지 않는다면 pair를 삽입하는 추가 연산을 하고,
	// 같은 key가 map에 존재한다면 해당 key를 가진 pair의 value를 갱신한다.
	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;

	// map 내부를 순회하기 위한 iterator 선언
	map<int, int>::iterator iter;

	// iterator를 사용하여 map에서 가장 작은 key를 가진 pair부터 가장 큰 key를 가진 pair까지 순차적으로 탐색하여 출력함
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	}

	cout << endl;

	m[5] = 200; // 5를 Key로 가진 value를 200으로 갱신한다.


	// map의 pair를 처음부터 끝까지 출력하여 갱신 결과를 확인한다.
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;

	return 0;

}