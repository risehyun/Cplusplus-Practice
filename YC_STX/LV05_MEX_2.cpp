#include <iostream>

void test(int x) {

    if (x == 4) {
        return;

    }

    std::cout << x;
    test(x + 1);
}

char main() {

    test(0);
    return 0;
}