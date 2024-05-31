#include <iostream>

// 패턴찾기 -> 2중 For문에서 패턴찾기

int map[5][5] = {
        1, 3, 5, 1, 5,
        3, 7, 9, 5, 8,
        4,5,3,9,7,
        2,7,6,1,9,
        1,6,2,3,8
};

int pattern[2][2] = {
    3, 5,
    7, 9
};

int isPattern(int dy, int dx) {
    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 2; x++)
        {
            if (map[dy][x] != pattern[y][x]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    for (size_t y = 0; y < 4; y++)
    {
        for (size_t x = 0; x < 4; x++)
        {
            int result = isPattern(y, x);
            if (result == 1) {
                std::cout << "존재";
            }
            else {
                std::cout << "노존재" << std::endl;
            }
        }
    }

    return 0;
}