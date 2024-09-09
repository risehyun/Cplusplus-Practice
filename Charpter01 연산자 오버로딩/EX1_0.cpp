#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0, value = 0;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        v.push_back(value);
    }

    // ���� Ž���� ���� ���� ���� ���� ���� �����͸� sort ���ش�.
    sort(v.begin(), v.end());
 
    cin >> n;

    // ���� Ž�� �Լ��� ����� ���� ���ο� �Է¹��� ���� �����ϴ��� Ȯ���Ѵ�.
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        cout << binary_search(v.begin(), v.end(), value) << ' ';
    }

}