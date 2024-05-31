// 방향을 표현하는 코딩 방법 (최초 위치의 좌표값을 입력을 받는 경우)

#include <iostream>

int main() {
    int arr[3][3] = {
        3, 5, 4,
        1, 1, 2,
        1, 3, 9
    };

    int y, x;
    std::cin >> y >> x;

    int direct[4][2] = {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        int newY = y + direct[i][1];
        int newX = x + direct[i][0];

        if (newX >= 0 && newX <= 2 && newY >= 0 && newY <= 2) {
            sum += arr[newY][newX];
        }
    }

    std::cout << sum;

    return 0;

}