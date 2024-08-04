#include <iostream>
#include <list>

/*
	반복자를 이용해 가리키는 원소의 노드만을 잘라붙이거나, 반복자 하나의 순차열을 잘라붙이고자 한다면
	다른 버전의 splice() 멤버 함수를 사용할 수 있다.
*/

using namespace std;
int main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);

	list<int>::iterator iter1;
	list<int>::iterator iter2;

	// 리스트에 추가된 데이터들을 확인하기 위해 출력해준다.
	cout << "lt1: ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout << *iter1 << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout << *iter2 << ' ';
	}
	cout << endl << "===============" << endl;

	
	iter1 = lt1.begin();
	++iter1;
	++iter1;	// 30 원소의 위치를 가리킴

	iter2 = lt2.begin(); 
	++iter2;    // 200 원소의 위치를 가리킴

	// iter1이 가리키는 위치에 iter2가 가리키는 위치의 lt2의 원소를 잘라붙임.
	lt1.splice(iter1, lt2, iter2);

	// 리스트에 저장된 데이터를 모두 출력하여 splice로 변동된 데이터 이동 결과를 확인해본다.
	cout << "lt1: ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout << *iter1 << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout << *iter2 << ' ';
	}
	cout << endl << "==========" << endl;

	// lt1.end()가 가리키는 위치에 순차열 [lt2.begin(), lt2.end())를 잘라 붙임
	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end());

	cout << "lt1: ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout << *iter1 << ' ';
	}
	cout << endl;

	cout << "lt2: ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout << *iter2 << ' ';
	}
	cout << endl;

	return 0;
}