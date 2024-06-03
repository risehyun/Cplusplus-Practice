#include <iostream>


void test(int x) {
    // x 값이 0보다 작아지면 return 합니다.
    if (x < 0) {
        return;
    }
    // 1. 여기서부터 실행됩니다.
    std::cout << x << " " << std::endl;
    test(x - 1);

    // 3. 다시 거꾸로 출력. 단, x가 0이 아닐 때에만 실행합니다
    if (x > 0) {
        std::cout << x << " " << std::endl;
    }
}

char main() {
    // 변수 x 입력 받기
    int x;
    std::cin >> x;
    // x값부터 test 실행
    test(x);
    return 0;

}