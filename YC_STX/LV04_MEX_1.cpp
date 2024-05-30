#include <iostream>

int main() {
    int arr[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    // 기준점을 (0,0) 으로 뒀을 때 좌표값의 배열
    int direct[4][2] = {
        -1, 0, // 상
        1, 0, // 하
        0, -1, // 좌
        0, 1 // 우
    };
    int y = 1;
    int x = 1;

    // 입력받을 경우
    // int x, y;
    // std::cin >> y >> x;

    int sum = 0;
    // 4X2 배열 direct 에서 
    for (size_t i = 0; i < 4; i++)
    {

        int newY = y + direct[i][0];
        int newX = x + direct[i][1];
        // ex) newX = 기존의 좌표값에 direct 배열의 x 좌표값을 더한다.
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