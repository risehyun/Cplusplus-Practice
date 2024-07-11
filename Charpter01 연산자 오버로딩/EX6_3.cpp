// vector�� size(), capacity(), max_size()

/* 

	size�� ���� ������ ���� (���� �迭 ������ ũ��), 
	capacity�� ������ �Ҵ�� �޸� ũ�� (���� vector���� �����ϴ� ���), 
	max_size�� ���� ��ǻ�� �޸𸮿��� �ִ� �Ҵ� ������ �迭�� ũ�⸦ �������ش� (���� ���� ū ����).

	���� capacity�� vector size�� Ŀ�� ���� size���� �ణ �� ũ�� �Ҵ�ȴ�.
	vector�� ��� push_back() �Լ��� ����� ����ؼ� ���ʿ� �����͸� �߰��� �� �ִµ�,
	�����͸� �ѹ� �߰��� ������ ����ؼ� ���Ӱ� �޸𸮸� ���Ҵ��ϰ� 
	���� vector�� �޸𸮸� ���� ������� vector�� ���� �ٿ��ֱ� �ϴ� ���� �ݺ��ϸ�
	��ȿ�����̰� ���� ���� ������ �߻��ϱ� ������
	�̸� �ణ�� (�� 1.3��, �����Ϸ����� �ٸ�) �߰� ������ capacity�� Ȯ���صΰ� ����Ѵ�.

	���� �ƶ����� �̸� �޸𸮸� �Ҵ��� �� �ִ� reserve() �Լ��� �����Ѵ�.

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