// 구조체, 클래스를 이용한 배열

struct ABC
{
    int a;
    int b;
};

int main() {
    // 클래스 역시 배열로 만들 수 있다.
    ABC arr[3]; 

    arr[0].a = 100; // 첫번째 ABC 클래스 객체의 A값을 할당
    arr[0].b = 200; // 첫번째 ABC 클래스 객체의 B값을 할당

    return 0;
}