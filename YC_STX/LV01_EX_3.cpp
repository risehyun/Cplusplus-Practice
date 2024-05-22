// EX3 이동 생성자 등
/*

이동 생성자 => 원래 데이터를 복사하지 않고 기존 개체 데이터의 소유권을 새 변수로 이동하는 특수 멤버 함수 
rvalue 참조를 첫 번째 매개 변수로 사용, 이후 매개 변수에는 기본값이 있어야 한다. 
이동 생성자는 큰 개체를 전달할 때 프로그램의 효율성을 크게 높일 수 있다.

기본 형태 예시
Box(Box&& other);

다른 개체가 제거되고 더 이상 해당 리소스가 필요하지 않은 경우 
컴파일러는 개체가 동일한 형식의 다른 개체에 의해 초기화될 때 이동 생성자를 선택한다. 

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Box {
public:
    Box() { std::cout << "default" << std::endl; }
    Box(int width, int height, int length)
        : m_width(width), m_height(height), m_length(length)
    {
        std::cout << "int,int,int" << std::endl;
    }
    Box(Box& other)
        : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length)
    {
        std::cout << "copy" << std::endl;
    }
    Box(Box&& other) : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length)
    {
        m_contents = std::move(other.m_contents);
        std::cout << "move" << std::endl;
    }
    int Volume() { return m_width * m_height * m_length; }
    void Add_Item(string item) { m_contents.push_back(item); }
    void Print_Contents()
    {
        for (const auto& item : m_contents)
        {
            cout << item << " ";
        }
    }
private:
    int m_width{ 0 };
    int m_height{ 0 };
    int m_length{ 0 };
    vector<string> m_contents;
};

Box get_Box()
{
    Box b(5, 10, 18); // "int,int,int"
    b.Add_Item("Toupee");
    b.Add_Item("Megaphone");
    b.Add_Item("Suit");

    return b;
}

int main()
{
    Box b; // "default"
    Box b1(b); // "copy"
    Box b2(get_Box()); // "move"
    cout << "b2 contents: ";
    b2.Print_Contents(); // Prove that we have all the values

    char ch;
    cin >> ch; // keep window open
    return 0;
}


/*
명시적 기본값 및 삭제된 생성자

 복사 생성자, 기본 생성자, 이동 생성자, 복사 할당 연산자, 이동 할당 연산자 및 소멸자를
 명시적으로 기본값으로 지정할 수 있다.

 또한 모든 특수 멤버 함수는 명시적으로 삭제 할 수 있다.

*/

//class Box2
//{
//public:
//    Box2() = delete; // 명시적으로 삭제
//    Box2(const Box2& other) = default; // 명시적으로 기본값을 가짐
//    Box2& operator=(const Box2& other) = default;
//    Box2(Box2&& other) = default;
//    Box2& operator=(Box2&& other) = default;
//    //...
//};

/*
constexpr 생성자 : https://modoocode.com/293

constexpr 키워드란? 
객체나 함수 앞에 붙일 수 있는 키워드. 
해당 객체나 함수의 리턴값을 컴파일 타임에 값을 알 수 있다는 뜻임

즉, constexpr 생성자는 객체 생성시 컴파일 타임에 어떠한 식의 값을 결정할 수 있는 
'컴파일 타임 상수'로서 생성한다는 뜻.
이렇게 되면 해당 객체는 어떤 상수식에서든 사용될 수 있게 된다.

상수화한다고 하면 const와 비슷하게 생각될 수 있는데,
const 키워드로 정의된 상수들은 컴파일 타임에 그 값을 알 필요가 없다.
반면, constexpr 키워드로 정의된 변수의 경우 반드시 오른쪽에 다른 상수식이 와줘야 한다.
즉, constexpr는 언제나 const가 되지만 const는 constexpr이 아니다.

*/

/*
이니셜라이저 목록 생성자

생성자가 매개 변수로 사용하고 다른 매개 변수에 기본 인수가 있는 경우,
직접 초기화를 통해 클래스가 인스턴스화 될 때 해당 생성자가 오버로드 확인해서 선택된다.
이때 initializer_list<>를 사용해서 멤버를 초기화 할 수 있다.

** 생성자가 다음과 같이 존재하는 경우**
Box(initializer_list<string> list, int w = 0, int h = 0, int l = 0)
    : m_contents(list), m_width(w), m_height(h), m_length(l)
{}

** 아래와 같이 사용이 가능하다 **
   Box b{ "apples", "oranges", "pears" }; // or ...
   Box b2(initializer_list<string> { "bread", "cheese", "wine" }, 2, 4, 6);


*/


/*
    명시적 생성자

    클래스에 단일 매개 변수를 사용하는 생성자가 있거나 
    하나를 제외한 모든 매개 변수에서 기본값을 사용하는 경우, 
    이 매개 변수 형식은 클래스 형식으로 암시적으로 변환할 수 있다. 
    
    예를 들어 Box 클래스에 다음과 같은 생성자가 있는 경우

    Box(int size): m_width(size), m_length(size), m_height(size){}

    객체 생성시 아래와 같이 초기화할 수 있다,

    Box b = 42;



*/
//
//class ShippingOrder
//{
//public:
//    ShippingOrder(Box b, double postage) : m_box(b), m_postage(postage) {}
//
//private:
//    Box m_box;
//    double m_postage;
//}

//elsewhere...
 // Box를 사용하는 아래 함수에 int를 전달 할 수 있다.
//ShippingOrder so(42, 10.8);

/*
 하지만 위와 같은 경우 코드에서 심각한 오류가 발생하는 경우가 있다.
 일반적으로는 이런 암시적 형식 변환을 방지하기 위해 생성자나 사용자 정의 연산자에서 
 'explicit' 키워드를 사용한다. https://modoocode.com/253

 사용 예시는 아래와 같다.

 explicit Box(int size): m_width(size), m_length(size), m_height(size){}



 explicit 키워드를 사용하면 원하지 않는 암시적 변환을 할 수 없도록 컴파일러에게 명시해서
 해당 문제를 방지할 수 있다.

 또한 explicit을 사용하면 해당 생성자가 복사 생성자의 형태로도 호출되는 것도 막게 된다.

*/
