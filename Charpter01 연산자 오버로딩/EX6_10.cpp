/*
	swap�� ����� �Ҵ� �޸� ����
	=> clear�� �ص� capacity�� �ٲ��� �ʱ� ������ �޸𸮰� ����ȴ�.
	   �����̳� ��ü���� ��ȯ�� �� �ִ� swap�� ����� �ӽ÷� ������ size�� capacity�� 0��
	   �����̳� ��ü�� clear�� ��ü�� ���� swap�ϸ� �Ҵ�� �޸𸮸� ������ �� �ִ�.
*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v(5);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	// �⺻ �����ڷ� ���� �� vector �����̳ʿ� �޸𸮸� ������ v �����̳ʸ� swap���ش�.
	vector<int>().swap(v);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}