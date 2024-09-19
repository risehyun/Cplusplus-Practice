#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string pokemon[100000];

int main() {
	map<string, int> P;
	int N;               // ������ ���ϵ� ���ϸ� ��
	int M;               // ����� �ϴ� ������ ��
	string input_name;   // ����� �Ǵ� ���� �� �Էµ� �̸�
	int input_num;       // ����� �Ǵ� ���� �� �Էµ� ��ȣ

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) 
	{
		cin >> pokemon[i];
		P.insert(make_pair(pokemon[i], i));
	}

	for (int i = 0; i < M; i++) 
	{
		cin >> input_name;

		// 1. �Էµ� ���� ������ ���
		if (isdigit(input_name[0]) != 0) {
			input_num = stoi(input_name) - 1;
			cout << pokemon[input_num] << "\n";
		}

		// 2. �Էµ� ���� ������ ���
		else {
			auto index = P.find(input_name);
			cout << index->second + 1 << "\n";
		}
	}

	return 0;
}