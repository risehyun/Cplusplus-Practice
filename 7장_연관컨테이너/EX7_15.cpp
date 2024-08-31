/*
	map()의 insert() 반환 값

	map의 insert() 멤버 함수는 set처럼,
	저장한 원소의 위치를 가리키는 반복자와 
	삽입 성공 여부를 나타내는 bool값을 pair 객체로 반환한다.
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> m;
	pair<map<int, int>::iterator, bool> pr; // insert() 결과를 담을 pair 객체이다.
											// pr.first는 저장 원소의 위치를 가리키는 반복자이고
											// pr.second는 저장 성공 여부를 나타내는 bool 값이다.

	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	pr = m.insert(pair<int, int>(9, 50)); // 성공하면 true 반환, 현재 같은 key값이 없으므로 정상적으로 저장된다.
	
	if (true == pr.second)	// 저장이 성공했다면
	{
		cout << "Key: " << pr.first->first << ", value: "
			<< pr.first->second << " 저장 완료!" << endl;
	}

	else // 저장이 실패했다면
	{
		cout << "Key 9가 이미 m에 있습니다." << endl;
	}

	pr = m.insert(pair<int, int>(9, 50)); // 이미 같은 Key값이 존재하기 때문에 저장에 실패하게 된다.

	// 저장 성공시
	if (true == pr.second)
	{
		cout << "Key : " << pr.first->first << ", value: "
			<< pr.first->second << "저장 완료!" << endl;
	}

	// 저장 실패시
	else
	{
		cout << "key: 9가 이미 m에 있습니다." << endl;
	}


	return 0;

}