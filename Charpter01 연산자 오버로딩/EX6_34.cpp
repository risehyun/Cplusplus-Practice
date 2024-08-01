/*
	<list�� vector�� insert()>

	��� ��� �����̳��� list�� ����, ���� ������ �迭 ��� �����̳��� vector�� ����, ���ſ� ���� ����� ���´�.
	�׷��� ���� ������ �ٸ���.

	vector�� �޸� list�� ���Ұ� ���Ե� �� �Ҵ� �޸𸮰� �����ϸ� �޸𸮸� ���Ҵ����� �ʰ� 
	���ο� ��带 ����, �����Ͽ� ���� ��忡 �����Ѵ�.

	���� �ӵ��� ������ �ݺ��ڵ��� ��ȿȭ������ �ʴ´�.
	erase() �Լ��� ���۵� ���� ���۰� ���� Ư¡�� ���δ�.
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> v;
	list<int> lt;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	vector<int>::iterator viter = v.begin();
	++viter; // 20���Ҹ� ����Ų��.

	list<int>::iterator liter = lt.begin();
	++liter; // 20���Ҹ� ����Ų��.

	viter = v.insert(viter, 600);  // v�� �� ��° ��ҷ� �����Ѵ�.
	liter = lt.insert(liter, 600); // lt�� �� ��° ��ҷ� �����Ѵ�.

	cout << "vector: " << *viter << endl;
	cout << "list: " << *liter << endl;

	cout << "vector : ";
	for (viter = v.begin(); viter != v.end(); ++viter)
	{
		cout << *viter << ' ';
	}
	cout << endl;

	cout << "list : ";
	for (liter = lt.begin(); liter != lt.end(); ++liter)
	{
		cout << *liter << ' ';
	}
	cout << endl;

	return 0;
}