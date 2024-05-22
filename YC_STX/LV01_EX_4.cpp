
/*
    생성자의 작동 순서

    생성자는 다음 순서대로 작업을 수행한다.

    1. 선언 순서대로 기본 클래스 및 멤버 생성자를 호출하여 기본적인 생성 작업을 한다.
    2. 클래스가 가상 기본 클래스에서 파생된 경우에는 해당 클래스에서 객체의 가상 기본 포인터를 초기화 한다.
    3. 클래스가 가상 함수를 포함하거나 상속하는 경우, 해당 클래스가 객체의 가상 함수 포인터를 초기화 한다.
    이때 가상 함수 포인터는 클래스의 가상 함수 테이블을 가리켜서 가상 함수 호출의 올바르게 바인딩 되도록 한다.
    4. 이 포인터가 함수 본문의 모든 코드를 실행하게 된다.

*/

/*

아래 예제는 BaseContainer 클래스의 파생 클래스인
DerivedContainer 클래스의 생성자에서, 
기본 클래스 및 멤버 생성자가 호출되는 순서를 보여 준다.

호출 순서

1. 먼저 기본 생성자가 호출된다.
2. 기본 생성자 호출 작업 중에 기본 클래스 멤버를 클래스 선언에 나타나는 순서대로 하나씩 초기화 한다.
3. 초기화가 끝나면 기본 생성자 호출을 마무리 한다.
4. 마지막으로 파생 생성자가 호출된다.

*/
//
//#include <iostream>
//
//using namespace std;
//
//class Contained1 {
//public:
//    Contained1() { cout << "Contained1 ctor\n"; }
//};
//
//class Contained2 {
//public:
//    Contained2() { cout << "Contained2 ctor\n"; }
//};
//
//class Contained3 {
//public:
//    Contained3() { cout << "Contained3 ctor\n"; }
//};
//
//class BaseContainer {
//public:
//    BaseContainer() { cout << "BaseContainer ctor\n"; }
//private:
//    Contained1 c1;
//    Contained2 c2;
//};
//
//class DerivedContainer : public BaseContainer {
//public:
//    DerivedContainer() : BaseContainer() { cout << "DerivedContainer ctor\n"; }
//private:
//    Contained3 c3;
//};
//
//int main() {
//    DerivedContainer dc;
//}

/*
실행시 아래와 같이 작동한다.

Contained1 ctor // 부모 클래스인 BaseContainer의 멤버 변수인 Contained1, Contained2를 먼저 생성
Contained2 ctor
BaseContainer ctor // 멤버 변수 생성이 끝났으므로 마지막으로 기본 생성자 호출을 마무리함
Contained3 ctor  // DerivedContainer 클래스의 멤버 변수인 Contained3 클래스 객체를 먼저 생성
DerivedContainer ctor // 이후 DerivedContainer 클래스의 생성 마무리



파생 클래스 생성자는 항상 기본 클래스 생성자를 호출하므로, 
완전히 생성된 기본 클래스를 통해서만 다른 작업을 수행할 수 있다.

기본 클래스 생성자는 파생 순서로 호출된다. 
기본 클래스에 기본 생성자가 없는 경우 
파생 클래스 생성자에서 기본 클래스 생성자의 매개 변수를 제공해야 한다.

*/
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Box {
//public:
//    Box(int width, int length, int height) {
//        m_width = width;
//        m_length = length;
//        m_height = height;
//    }
//
//private:
//    int m_width;
//    int m_length;
//    int m_height;
//};
//
//class StorageBox : public Box {
//public:
//// Box 클래스에 기본 생성자가 없으므로, 파생 클래스인 StorageBox의 생성자에서
//// 기본 클래스 Box에 대한 생성자의 매개 변수 width, length, height를 제공하고 있다.
//    StorageBox(int width, int length, int height, const string label&) : Box(width, length, height) {
//        m_label = label;
//    }
//private:
//    string m_label;
//};
//
//int main() {
//
//    const string aLabel = "aLabel";
//    StorageBox sb(1, 2, 3, aLabel);
//}

/*
생성자가 예외를 throw하는 경우 소멸 순서는 생성의 역순으로 실행된다.

1. 생성자 함수 본문의 코드가 해제된다.
2. 기본 클래스 및 멤버 개체가 선언의 역순으로 제거된다.
3. 생성자가 위임되지 않으면 완전히 생성된 모든 기본 클래스 개체와 멤버가 제거된다. 
그러나 이 경우에는 개체 자체가 완전히 생성되지 않은 상태이므로 소멸자는 실행되지 않게 된다.

*/

/*

파생 생성자 및 확장 집계 초기화

기본 클래스의 생성자가 public이 아니지만, 파생 클래스에 액세스할 수 있는 경우(ex. 서로 프랜드거나 상속받은 경우 등등)
빈 중괄호를 사용하여 Visual Studio 2017 이상에서 모드에서 
/std:c++17 파생된 형식의 개체를 초기화할 수 없다.

다음 예제는 C++14 방식으로 코드가 작동하는 것을 보여 준다.


*/
//
//struct Derived;
//
//struct Base {
//    friend struct Derived;
//private:
//    Base() {}
//};
//
//struct Derived : Base {};
//
//Derived d1; // OK. No aggregate init involved.
//Derived d2{}; // OK in C++14: Calls Derived::Derived()
//// which can call Base ctor.

/*

C++17에서 Derived는 프라이빗 기본 생성자를 통한 Base의 초기화가 
확장된 초기화 규칙의 일부로 직접 발생한다.

Base 이전에는 프라이빗 생성자가 생성자를 통해 Derived 호출되었고 선언으로 인해 friend 처리 된다.

*/
//
//struct Derived;
//
//struct Base {
//    friend struct Derived;
//private:
//    Base() {}
//};
//
//struct Derived : Base {
//    Derived() {} // add user-defined constructor
//    // to call with {} initialization
//};
//
//int main()
//{
//    Derived d1; // OK. No aggregate init involved.
//
//    Derived d2{}; // error C2248: 'Base::Base': can't access
//    // private member declared in class 'Base'
//
//}


/*

<여러 상속이 있는 클래스에 대한 생성자>

클래스가 여러 기본 클래스에서 파생된 경우 
기본 클래스 생성자는 파생 클래스의 선언에 나열된 순서대로 호출된다.


아래 예제의 경우

BaseClass1 ctor
BaseClass3 ctor
BaseClass2 ctor
DerivedClass ctor

순서대로 실행되게 된다. (상속하겠다고 명시된 순서대로 하나씩 실행됨)

*/
//
//#include <iostream>
//
//using namespace std;
//
//class BaseClass1 {
//public:
//    BaseClass1() { cout << "BaseClass1 ctor\n"; }
//};
//class BaseClass2 {
//public:
//    BaseClass2() { cout << "BaseClass2 ctor\n"; }
//};
//class BaseClass3 {
//public:
//    BaseClass3() { cout << "BaseClass3 ctor\n"; }
//};
//class DerivedClass : public BaseClass1,
//    public BaseClass3,
//    public BaseClass2
//{
//public:
//    DerivedClass() { cout << "DerivedClass ctor\n"; }
//};
//
//int main() {
//    DerivedClass dc;
//}
//

/*
    <위임 생성자>

    위임된 생성자는 동일한 클래스에서 다른 생성자를 호출해 초기화 작업 중 일부를 수행하는 역할을 한다. 
    이 기능은 모두 비슷한 작업을 수행해야 하는 여러 생성자가 있는 경우에 유용하게 사용 할 수 있다. 
    
    한 생성자에 기본적인 로직을 작성한 뒤 다른 생성자에서 호출할 수 있다. 
    
    아래 예제에서 Box(int)는 해당 작업을 Box(int,int,int,int)에 위임합니다.

*/
//
//class Box {
//public:
//    // Default constructor
//    Box() {}
//
//    // Initialize a Box with equal dimensions (i.e. a cube)
//    Box(int i) : Box(i, i, i)  // delegating constructor
//    {}
//
//    // Initialize a Box with custom dimensions
//    Box(int width, int length, int height)
//        : m_width(width), m_length(length), m_height(height)
//    {}
//    //... rest of class as before
//};

/*
    <생성자 상속(C++11)>

    파생 클래스는 다음 예제와 같이 선언을 사용하여 
    직접 기본 클래스에서 생성자를 상속할 수 있다.

*/

#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Base()" << endl; }
    Base(const Base& other) { cout << "Base(Base&)" << endl; }
    explicit Base(int i) : num(i) { cout << "Base(int)" << endl; }
    explicit Base(char c) : letter(c) { cout << "Base(char)" << endl; }

private:
    int num;
    char letter;
};

class Derived : Base
{
public:
    // Inherit all constructors from Base
    using Base::Base;

private:
    // Can't initialize newMember from Base constructors.
    int newMember{ 0 };
};

int main()
{
    cout << "Derived d1(5) calls: ";
    Derived d1(5);
    cout << "Derived d1('c') calls: ";
    Derived d2('c');
    cout << "Derived d3 = d2 calls: ";
    Derived d3 = d2;
    cout << "Derived d4 calls: ";
    Derived d4;
}

/* Output:
Derived d1(5) calls: Base(int)
Derived d1('c') calls: Base(char)
Derived d3 = d2 calls: Base(Base&)
Derived d4 calls: Base()*/

/*

일반적으로 파생 클래스가 새 데이터 멤버 또는 생성자를 선언하지 않을 때 
상속 생성자를 사용하는 것이 가장 좋다. (혼선을 방지하기 위해서라고 생각됨)

클래스 템플릿은 해당 형식이 기본 클래스를 지정하는 경우 
형식 인수에서 모든 생성자를 상속할 수 있다.

*/

//template< typename T >
//class Derived : T {
//    using T::T;   // declare the constructors from T
//    // ...
//};

/*

  <생성자 및 복합 클래스>

  클래스 형식 멤버를 포함하는 클래스를 복합 클래스라고 한다.
  복합 클래스의 클래스 형식 멤버를 만들 때 생성자가 클래스의 자체 생성자보다 먼저 호출된다.
  
  포함된 클래스에 기본 생성자가 없는 경우 복합 클래스의 생성자에서 초기화 목록을 사용해야 한다.
  이전 StorageBox 예제에서 m_label 멤버 변수의 형식을 새 Label 클래스로 변경할 경우 
  기본 클래스 생성자를 호출하고 m_label 생성자에서 StorageBox 변수를 초기화해야 한다.

*/
//
//class Label {
//public:
//    Label(const string& name, const string& address) { m_name = name; m_address = address; }
//    string m_name;
//    string m_address;
//};
//
//class StorageBox : public Box {
//public:
//    StorageBox(int width, int length, int height, Label label)
//        : Box(width, length, height), m_label(label) {}
//private:
//    Label m_label;
//};
//
//int main() {
//    // passing a named Label
//    Label label1{ "some_name", "some_address" };
//    StorageBox sb1(1, 2, 3, label1);
//
//    // passing a temporary label
//    StorageBox sb2(3, 4, 5, Label{ "another name", "another address" });
//
//    // passing a temporary label as an initializer list
//    StorageBox sb3(1, 2, 3, { "myname", "myaddress" });
//}