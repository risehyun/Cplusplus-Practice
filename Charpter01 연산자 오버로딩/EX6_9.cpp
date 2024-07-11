/*
	vector�� clear()�� empty()
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5);	// �⺻���� 0�̰� size�� 5�� vector ����

	v[0] = 0;
	v[1] = 10;
	v[2] = 20;
	v[3] = 30;
	v[4] = 40;

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.clear();
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	if (v.empty())	// v�� ������� bool�� return ����.
	{
		cout << "v�� ���Ұ� �����ϴ�." << endl;
	}

	return 0;

}