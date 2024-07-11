#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	v.push_back(10);

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	
	cout << endl;

	return 0;
}