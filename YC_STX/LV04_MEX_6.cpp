#include <iostream>

char map[3][4] = {
        {'A', 'B', 'G', 'K'},
        {'T', 'T', 'A', 'B'},
        {'A', 'C', 'C', 'D'}
};

char pattern[2][2];

char isPattern(char y, char x) {
    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 2; x++)
        {
            if (map[y][x] != pattern[y][x]) {
                return 0;
            }
        }
    }
    return 1;
}


char main() {
    for (size_t i = 0; i < 2; i++)
    {
        std::cin >> pattern[i][0];
        std::cin >> pattern[i][1];
    }

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            int result = isPattern(i, j);
            if (result == 1) {
                std::cout << "발견\n";
            }
            else {
                std::cout << "미발견\n";
            }
        }
    }


    return 0;

}