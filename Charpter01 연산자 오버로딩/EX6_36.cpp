#include <iostream>
#include <list>

/*
    <list�� remove_if()>

    remove_if() ��� �Լ��� ���� ������(predicate)�� ���� ��� ���Ҹ� �����Ѵ�.
    �����ڴ� bool ������ ��ȯ�ϴ� �Լ���(�Լ�, �Լ� ��ü, �Լ� ������)�̴�.
*/

using namespace std;

bool Predicate(int n) // remove�� ����� ���� �����ڸ� �Լ��� �������ش�
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

    lt.remove_if(Predicate); // �����ڷ� �ɾ�� �Լ� ���ο��� ������ �ǴܵǴ� ��� ���Ҹ� �����Ѵ�.
    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;

    return 0;
}