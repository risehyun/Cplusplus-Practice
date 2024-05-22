
/*
    �������� �۵� ����

    �����ڴ� ���� ������� �۾��� �����Ѵ�.

    1. ���� ������� �⺻ Ŭ���� �� ��� �����ڸ� ȣ���Ͽ� �⺻���� ���� �۾��� �Ѵ�.
    2. Ŭ������ ���� �⺻ Ŭ�������� �Ļ��� ��쿡�� �ش� Ŭ�������� ��ü�� ���� �⺻ �����͸� �ʱ�ȭ �Ѵ�.
    3. Ŭ������ ���� �Լ��� �����ϰų� ����ϴ� ���, �ش� Ŭ������ ��ü�� ���� �Լ� �����͸� �ʱ�ȭ �Ѵ�.
    �̶� ���� �Լ� �����ʹ� Ŭ������ ���� �Լ� ���̺��� �����Ѽ� ���� �Լ� ȣ���� �ùٸ��� ���ε� �ǵ��� �Ѵ�.
    4. �� �����Ͱ� �Լ� ������ ��� �ڵ带 �����ϰ� �ȴ�.

*/

/*

�Ʒ� ������ BaseContainer Ŭ������ �Ļ� Ŭ������
DerivedContainer Ŭ������ �����ڿ���, 
�⺻ Ŭ���� �� ��� �����ڰ� ȣ��Ǵ� ������ ���� �ش�.

ȣ�� ����

1. ���� �⺻ �����ڰ� ȣ��ȴ�.
2. �⺻ ������ ȣ�� �۾� �߿� �⺻ Ŭ���� ����� Ŭ���� ���� ��Ÿ���� ������� �ϳ��� �ʱ�ȭ �Ѵ�.
3. �ʱ�ȭ�� ������ �⺻ ������ ȣ���� ������ �Ѵ�.
4. ���������� �Ļ� �����ڰ� ȣ��ȴ�.

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
����� �Ʒ��� ���� �۵��Ѵ�.

Contained1 ctor // �θ� Ŭ������ BaseContainer�� ��� ������ Contained1, Contained2�� ���� ����
Contained2 ctor
BaseContainer ctor // ��� ���� ������ �������Ƿ� ���������� �⺻ ������ ȣ���� ��������
Contained3 ctor  // DerivedContainer Ŭ������ ��� ������ Contained3 Ŭ���� ��ü�� ���� ����
DerivedContainer ctor // ���� DerivedContainer Ŭ������ ���� ������



�Ļ� Ŭ���� �����ڴ� �׻� �⺻ Ŭ���� �����ڸ� ȣ���ϹǷ�, 
������ ������ �⺻ Ŭ������ ���ؼ��� �ٸ� �۾��� ������ �� �ִ�.

�⺻ Ŭ���� �����ڴ� �Ļ� ������ ȣ��ȴ�. 
�⺻ Ŭ������ �⺻ �����ڰ� ���� ��� 
�Ļ� Ŭ���� �����ڿ��� �⺻ Ŭ���� �������� �Ű� ������ �����ؾ� �Ѵ�.

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
//// Box Ŭ������ �⺻ �����ڰ� �����Ƿ�, �Ļ� Ŭ������ StorageBox�� �����ڿ���
//// �⺻ Ŭ���� Box�� ���� �������� �Ű� ���� width, length, height�� �����ϰ� �ִ�.
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
�����ڰ� ���ܸ� throw�ϴ� ��� �Ҹ� ������ ������ �������� ����ȴ�.

1. ������ �Լ� ������ �ڵ尡 �����ȴ�.
2. �⺻ Ŭ���� �� ��� ��ü�� ������ �������� ���ŵȴ�.
3. �����ڰ� ���ӵ��� ������ ������ ������ ��� �⺻ Ŭ���� ��ü�� ����� ���ŵȴ�. 
�׷��� �� ��쿡�� ��ü ��ü�� ������ �������� ���� �����̹Ƿ� �Ҹ��ڴ� ������� �ʰ� �ȴ�.

*/

/*

�Ļ� ������ �� Ȯ�� ���� �ʱ�ȭ

�⺻ Ŭ������ �����ڰ� public�� �ƴ�����, �Ļ� Ŭ������ �׼����� �� �ִ� ���(ex. ���� ������ų� ��ӹ��� ��� ���)
�� �߰�ȣ�� ����Ͽ� Visual Studio 2017 �̻󿡼� ��忡�� 
/std:c++17 �Ļ��� ������ ��ü�� �ʱ�ȭ�� �� ����.

���� ������ C++14 ������� �ڵ尡 �۵��ϴ� ���� ���� �ش�.


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

C++17���� Derived�� �����̺� �⺻ �����ڸ� ���� Base�� �ʱ�ȭ�� 
Ȯ��� �ʱ�ȭ ��Ģ�� �Ϻη� ���� �߻��Ѵ�.

Base �������� �����̺� �����ڰ� �����ڸ� ���� Derived ȣ��Ǿ��� �������� ���� friend ó�� �ȴ�.

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

<���� ����� �ִ� Ŭ������ ���� ������>

Ŭ������ ���� �⺻ Ŭ�������� �Ļ��� ��� 
�⺻ Ŭ���� �����ڴ� �Ļ� Ŭ������ ���� ������ ������� ȣ��ȴ�.


�Ʒ� ������ ���

BaseClass1 ctor
BaseClass3 ctor
BaseClass2 ctor
DerivedClass ctor

������� ����ǰ� �ȴ�. (����ϰڴٰ� ��õ� ������� �ϳ��� �����)

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
    <���� ������>

    ���ӵ� �����ڴ� ������ Ŭ�������� �ٸ� �����ڸ� ȣ���� �ʱ�ȭ �۾� �� �Ϻθ� �����ϴ� ������ �Ѵ�. 
    �� ����� ��� ����� �۾��� �����ؾ� �ϴ� ���� �����ڰ� �ִ� ��쿡 �����ϰ� ��� �� �� �ִ�. 
    
    �� �����ڿ� �⺻���� ������ �ۼ��� �� �ٸ� �����ڿ��� ȣ���� �� �ִ�. 
    
    �Ʒ� �������� Box(int)�� �ش� �۾��� Box(int,int,int,int)�� �����մϴ�.

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
    <������ ���(C++11)>

    �Ļ� Ŭ������ ���� ������ ���� ������ ����Ͽ� 
    ���� �⺻ Ŭ�������� �����ڸ� ����� �� �ִ�.

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

�Ϲ������� �Ļ� Ŭ������ �� ������ ��� �Ǵ� �����ڸ� �������� ���� �� 
��� �����ڸ� ����ϴ� ���� ���� ����. (ȥ���� �����ϱ� ���ؼ���� ������)

Ŭ���� ���ø��� �ش� ������ �⺻ Ŭ������ �����ϴ� ��� 
���� �μ����� ��� �����ڸ� ����� �� �ִ�.

*/

//template< typename T >
//class Derived : T {
//    using T::T;   // declare the constructors from T
//    // ...
//};

/*

  <������ �� ���� Ŭ����>

  Ŭ���� ���� ����� �����ϴ� Ŭ������ ���� Ŭ������� �Ѵ�.
  ���� Ŭ������ Ŭ���� ���� ����� ���� �� �����ڰ� Ŭ������ ��ü �����ں��� ���� ȣ��ȴ�.
  
  ���Ե� Ŭ������ �⺻ �����ڰ� ���� ��� ���� Ŭ������ �����ڿ��� �ʱ�ȭ ����� ����ؾ� �Ѵ�.
  ���� StorageBox �������� m_label ��� ������ ������ �� Label Ŭ������ ������ ��� 
  �⺻ Ŭ���� �����ڸ� ȣ���ϰ� m_label �����ڿ��� StorageBox ������ �ʱ�ȭ�ؾ� �Ѵ�.

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