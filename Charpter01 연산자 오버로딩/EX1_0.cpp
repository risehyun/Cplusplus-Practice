#include <iostream>
#include <algorithm>
using namespace std;

// ���� ü���� ���� 2���� �̸� string �迭�� ����
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

// �Է¹��� m*n ���带 �ޱ� ���� �迭
string board[50];

int cntWB(int x, int y);
int cntBW(int x, int y);

int main() {
    ios_base::sync_with_stdio(false);	// �� ǥ�� ����� ����ȭ ����
    cin.tie(NULL);	// �Է°� ��� ������ Ǯ��

    int n, m;
    cin >> n >> m;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, board[i]);
    }
    int minVal = 65; // 8*8 ĭ ��� �ٽ� ĥ�ص� 64��

    for (int i = 0; i + 8 <= n; i++) {
        for (int j = 0; j + 8 <= m; j++) {
            int tmp = min(cntWB(i, j), cntBW(i, j));
            if (tmp < minVal) minVal = tmp;
        }
    }
    cout << minVal;
    return 0;
}

// W�� �����ϴ� ü����: ���� ĥ�ؾ� �ϴ� ĭ �� ��ȯ
int cntWB(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}

// B�� �����ϴ� ü����: ���� ĥ�ؾ� �ϴ� ĭ �� ��ȯ
int cntBW(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}