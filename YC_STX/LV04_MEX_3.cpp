// 2중 포인터 변수 예제

#include <iostream>

// 포인터 변수 = 주소값(주소 타입)을 저장하는 변수 타입
// int* P = &a; (a의 주소값을 포인터 변수의 값으로 가진다)
// int 변수 = 정수형 숫자를 저장하는 변수 타입
// char 변수 = 문자형 글자를 저장하는 변수 타입

// 2중 포인터 변수
// (int a = 100) == (int* P = &a) == (int** PP = &P) == (&P = 0X17)
using namespace std;
int main() {
    int a = 100;
    int* p = &a;   // p에는 a의 주소가 담긴다.
    int** pp = &p; // pp에는 a의 주소가 담긴 p의 주소가 담긴다.

    *(*pp) = 200; // *로 해당 주소에 저장된 value에 접근, 
                  // 즉 pp에 저장된 p의 값인 a의 주소에 접근해서 해당 a에 할당된 값을 100에서 200으로 할당함 

    cout << *(*pp);    // 결국 a의 값이 변한 200이 최종 출력된다.



    return 0;
}