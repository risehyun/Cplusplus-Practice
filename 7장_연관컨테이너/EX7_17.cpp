/*
	map 컨테이너의 정렬 기준 조건자 greater
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	// greater 정렬 기준(내림차순)의 key:int, value:string 타입의 컨테이너 m 생성
	
	map<int, string, greater<int>> m;

	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";

	map<int, string, greater<int>>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << "(" << iter->first << ',' << iter->second << ")" << " ";
	}

	cout << endl;

	// 배열과 동일하게 map의 value는 []에 해당되는 key를 통해 참조하여 바로 값을 출력할 수 있다.
	cout << m[9] << " ";	// Key와 매핑된 value를 출력
	cout << m[8] << " ";
	cout << m[7] << " ";
	cout << m[5] << " ";
	cout << m[4] << " ";
	cout << m[3] << " ";
	cout << m[1] << endl;

	return 0;

}