// 문제
// 출력결과 : 0 1 2 3
#include <iostream>
int arr[5] = { 5,7,1,2,3 };

void test(int x)
{
    // 무한정 호출되는 함수를 
    // 방지해야 하는게 급선무이다.
    if (x == 3)
    {
        return;
    }

    std::cout << arr[x];
    test(x + 1);
}

int main()
{
    test(0);

    return 0;
}