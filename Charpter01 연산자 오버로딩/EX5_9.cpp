#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	stack<int, vector<int>> st; // vector �����̳ʸ� �̿��� stack �����̳� ����

	st.push(10); // ������ �߰� (�Է�)
	st.push(20);
	st.push(30);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty()) // ������ ������� Ȯ��
	{
		cout << "stack�� ������ ����" << endl;
	}

	return 0;

}