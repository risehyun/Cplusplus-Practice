#include <iostream>

int arr[8] = { 3,7,4,1,9,4,6,2 };

void test(int x) {

    if (x < 0) {
        return;
    }

    std::cout << arr[x] << " ";
    test(x - 1);
    if (x > 0) {
        std::cout << arr[x] << " ";
    }
}

char main() {
    int x;
    std::cin >> x;
    test(x);
    return 0;

}