#include <iostream>

// ABC -> test -> main 순서로 빼줘야한다
// 가장 나중에 들어온 데이터가 가장 먼저 빠져나가는 것 = stack

// 재귀함수란 흔히 나 자신을 호출하는 함수라고 많이들 하지만
// 실제로는 코드가 재활용되어 함수를 호출하는 것이다.
// 즉 main -> test -> test -> test .......
// 계속해서 스택이 쌓이는 것이다.
// 아래의 코드를 F5 하면 'Stack Overflow' 표시가 나온다


void test(int x) {

    // 무한정 호출되는 함수를 방지해야 하는 게 급선무이다.
    // test(x);

    // 아래의 함수를 호출하면 4025번까지 호출되고나서 stack Overflow 된다
    // test(x + 1);

    // 종료 조건 == 기저사례가 반드시 있어야 한다.
    if (x == 3) {
        return;
        // test(2) 로 돌아감 -> test(1) -> ... main 으로 돌아감
    }

    test(x + 1);
    std::cout << x;
}

char main() {

    test(3);
    return 0;

}