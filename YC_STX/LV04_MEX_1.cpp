#include <iostream>

int main() {
    int arr[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    // �������� (0,0) ���� ���� �� ��ǥ���� �迭
    int direct[4][2] = {
        -1, 0, // ��
        1, 0, // ��
        0, -1, // ��
        0, 1 // ��
    };
    int y = 1;
    int x = 1;

    // �Է¹��� ���
    // int x, y;
    // std::cin >> y >> x;

    int sum = 0;
    // 4X2 �迭 direct ���� 
    for (size_t i = 0; i < 4; i++)
    {

        int newY = y + direct[i][0];
        int newX = x + direct[i][1];
        // ex) newX = ������ ��ǥ���� direct �迭�� x ��ǥ���� ���Ѵ�.
        // ex) newY = 1 + direct[0][0] (=-1) => 0
        // ex) newX = 1 + direct[0][1] (=0) -> 1
        // ex) newY, newX = 0, 1
        // ex) arr[0][1] = 2

        if (newX >= 0 && newX <= 2 && newY >= 0 && newY <= 2)
        {
            sum += arr[newY][newX];
        }
    }

    std::cout << sum;

    return 0;
}