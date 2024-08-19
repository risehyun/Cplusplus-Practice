#include <iostream>
#include <algorithm>
using namespace std;

int n, m;                       // a_array �迭�� ����, ã�����ϴ� ���� x�� ����
int a_array[1000000];           // ���� a�� ������ �迭
int temp;

void binary_search(int x) {
    int left = 0, mid = 0, right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        // Ż�� ���� : a_array���� x�� ã�� ���
        if (a_array[mid] == x) {
            cout << 1 << "\n";
            return;
        }
        else if (a_array[mid] > x) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    // �̺� Ž���� ���� ������ x�� ã�� ���ߴٸ� 0(false)�� ����Ѵ�.
    cout << 0 << "\n";

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a_array[i];
    }

    // �̺� Ž�� �˰����� �����ϱ� ���� �迭�� ������������ �����Ѵ�.
    sort(a_array, a_array + n);

    cin >> m;

    int x;
    for (int i = 0; i < m; i++) {
        cin >> x;
        binary_search(x);
    }

    return 0;
}