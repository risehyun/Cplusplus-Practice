#include <iostream>

using namespace std;

template <typename T>
void Swap(T& a, T& b);

int main(void)
{
    int c = 2, d = 3;
    cout << "c : " << c << ", d : " << d << endl;
    Swap(c, d);
    cout << "c : " << c << ", d : " << d << endl;
    string e = "hong", f = "kim";
    cout << "e : " << e << ", f : " << f << endl;
    Swap(e, f);
    cout << "e : " << e << ", f : " << f << endl;
    double g = 2.13, h = 3.14;
    cout << "g : " << g << ", h : " << h << endl;
    Swap<double>(g, h);
    cout << "g : " << g << ", h : " << h << endl;
    return 0;
}


template <typename T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

//template <>
//void Swap<double>(double&, double&)
//{
//    return;
//}
