#include <iostream>
#include <list>

/*
    <list의 remove_if()>

    remove_if() 멤버 함수는 단항 조건자(predicate)가 참인 모든 원소를 제거한다.
    조건자는 bool 형식을 반환하는 함수류(함수, 함수 객체, 함수 포인터)이다.
*/

using namespace std;

bool Predicate(int n) // remove시 사용할 단항 조건자를 함수로 선언해준다
{
    return 10 <= n && n <= 30;
}

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;

    lt.remove_if(Predicate); // 조건자로 걸어둔 함수 내부에서 참으로 판단되는 모든 원소를 제거한다.
    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;

    return 0;
}