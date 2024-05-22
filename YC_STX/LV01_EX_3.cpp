// EX3 �̵� ������ ��
/*

�̵� ������ => ���� �����͸� �������� �ʰ� ���� ��ü �������� �������� �� ������ �̵��ϴ� Ư�� ��� �Լ� 
rvalue ������ ù ��° �Ű� ������ ���, ���� �Ű� �������� �⺻���� �־�� �Ѵ�. 
�̵� �����ڴ� ū ��ü�� ������ �� ���α׷��� ȿ������ ũ�� ���� �� �ִ�.

�⺻ ���� ����
Box(Box&& other);

�ٸ� ��ü�� ���ŵǰ� �� �̻� �ش� ���ҽ��� �ʿ����� ���� ��� 
�����Ϸ��� ��ü�� ������ ������ �ٸ� ��ü�� ���� �ʱ�ȭ�� �� �̵� �����ڸ� �����Ѵ�. 

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
����� �⺻�� �� ������ ������

 ���� ������, �⺻ ������, �̵� ������, ���� �Ҵ� ������, �̵� �Ҵ� ������ �� �Ҹ��ڸ�
 ��������� �⺻������ ������ �� �ִ�.

 ���� ��� Ư�� ��� �Լ��� ��������� ���� �� �� �ִ�.

*/

//class Box2
//{
//public:
//    Box2() = delete; // ��������� ����
//    Box2(const Box2& other) = default; // ��������� �⺻���� ����
//    Box2& operator=(const Box2& other) = default;
//    Box2(Box2&& other) = default;
//    Box2& operator=(Box2&& other) = default;
//    //...
//};

/*
constexpr ������ : https://modoocode.com/293

constexpr Ű�����? 
��ü�� �Լ� �տ� ���� �� �ִ� Ű����. 
�ش� ��ü�� �Լ��� ���ϰ��� ������ Ÿ�ӿ� ���� �� �� �ִٴ� ����

��, constexpr �����ڴ� ��ü ������ ������ Ÿ�ӿ� ��� ���� ���� ������ �� �ִ� 
'������ Ÿ�� ���'�μ� �����Ѵٴ� ��.
�̷��� �Ǹ� �ش� ��ü�� � ����Ŀ����� ���� �� �ְ� �ȴ�.

���ȭ�Ѵٰ� �ϸ� const�� ����ϰ� ������ �� �ִµ�,
const Ű����� ���ǵ� ������� ������ Ÿ�ӿ� �� ���� �� �ʿ䰡 ����.
�ݸ�, constexpr Ű����� ���ǵ� ������ ��� �ݵ�� �����ʿ� �ٸ� ������� ����� �Ѵ�.
��, constexpr�� ������ const�� ������ const�� constexpr�� �ƴϴ�.

*/

/*
�̴ϼȶ����� ��� ������

�����ڰ� �Ű� ������ ����ϰ� �ٸ� �Ű� ������ �⺻ �μ��� �ִ� ���,
���� �ʱ�ȭ�� ���� Ŭ������ �ν��Ͻ�ȭ �� �� �ش� �����ڰ� �����ε� Ȯ���ؼ� ���õȴ�.
�̶� initializer_list<>�� ����ؼ� ����� �ʱ�ȭ �� �� �ִ�.

** �����ڰ� ������ ���� �����ϴ� ���**
Box(initializer_list<string> list, int w = 0, int h = 0, int l = 0)
    : m_contents(list), m_width(w), m_height(h), m_length(l)
{}

** �Ʒ��� ���� ����� �����ϴ� **
   Box b{ "apples", "oranges", "pears" }; // or ...
   Box b2(initializer_list<string> { "bread", "cheese", "wine" }, 2, 4, 6);


*/


/*
    ����� ������

    Ŭ������ ���� �Ű� ������ ����ϴ� �����ڰ� �ְų� 
    �ϳ��� ������ ��� �Ű� �������� �⺻���� ����ϴ� ���, 
    �� �Ű� ���� ������ Ŭ���� �������� �Ͻ������� ��ȯ�� �� �ִ�. 
    
    ���� ��� Box Ŭ������ ������ ���� �����ڰ� �ִ� ���

    Box(int size): m_width(size), m_length(size), m_height(size){}

    ��ü ������ �Ʒ��� ���� �ʱ�ȭ�� �� �ִ�,

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
 // Box�� ����ϴ� �Ʒ� �Լ��� int�� ���� �� �� �ִ�.
//ShippingOrder so(42, 10.8);

/*
 ������ ���� ���� ��� �ڵ忡�� �ɰ��� ������ �߻��ϴ� ��찡 �ִ�.
 �Ϲ������δ� �̷� �Ͻ��� ���� ��ȯ�� �����ϱ� ���� �����ڳ� ����� ���� �����ڿ��� 
 'explicit' Ű���带 ����Ѵ�. https://modoocode.com/253

 ��� ���ô� �Ʒ��� ����.

 explicit Box(int size): m_width(size), m_length(size), m_height(size){}



 explicit Ű���带 ����ϸ� ������ �ʴ� �Ͻ��� ��ȯ�� �� �� ������ �����Ϸ����� ����ؼ�
 �ش� ������ ������ �� �ִ�.

 ���� explicit�� ����ϸ� �ش� �����ڰ� ���� �������� ���·ε� ȣ��Ǵ� �͵� ���� �ȴ�.

*/
