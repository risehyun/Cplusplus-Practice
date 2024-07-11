#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.reserve(8);


	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);

	// 여기서 재할당 일어남
	cout << "size : " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	return 0;

}