#include <iostream>


// 리턴을 하면 바로 스코프에서 벗어나는 것이 아니라 
// 해당 함수를 빠져나왔을 때 스택이 하나 지워지면서,
// 이전에 재귀함수로 호출되었던 함수로 리턴되기 때문에
// 함수 호출 다음에 다른 코드가 있다면
// 리턴되면서 해당 코드가 있는 곳부터 순차 실행되어 최종적으로 스코프를 빠져나가게 된다.

int arr[5] = { 5, 7, 1, 2, 3 };

void test(int x) {

    if (x == 5) {
        return;
    }

    std::cout << arr[x] << " " << std::endl;
    test(x + 1);
    std::cout << arr[x] << " " << std::endl;
}

char main() {

    test(0);
    return 0;

}