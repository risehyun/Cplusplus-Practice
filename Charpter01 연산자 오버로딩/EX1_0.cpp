#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n = 0;
	vector<int> v;

	cin >> n;

	// �Է¹��� ���� ���ڸ��� ��� ���Ϳ� �ϳ��� ����
	while (n > 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	// ������������ sort�� ����
	sort(v.begin(), v.end());

	// reverse �Լ��� ���� �����͸� �ݴ�� ��������
	reverse(v.begin(), v.end());

	// ���� ��� ���
	for (int i = 0; i < v.size(); i++) 
	{
		cout << v[i];
	}

	return 0;
}