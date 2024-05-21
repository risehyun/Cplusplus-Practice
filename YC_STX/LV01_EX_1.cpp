
// EX1 생성자와 소멸자
/*
생성자는 클래스에서 멤버를 일일이 초기화 하는 대신 사용자가 직접 지정하는 방식으로 간편하게 초기화 할 수 있도록 도와줌
생성자는 클래스와 같은 이름을 사용하며 반환 값(return)이 없다는 특징이 있음
인수가 각각 다른 경우에는 사용자 지정된 오버로드를 필요한 만큼 정의할 수 있음 
(프로그램 실행시 컴파일러가 오버로드 확인 규칙에 따라 호출할 생성자를 자동 선택함)

기본 접근 권한은 public이지만 필요에 따라 protected나 private로 지정 가능
멤버 이니셜라이저 목록이라는 것을 사용가능 함 (생성자 본문 스코프 안에서 일일이 지정하는 것보다 훨씬 효율적)

const, volatile 초기화가 가능하다.


암시적 기본 생성자를 사용하는 경우 클래스 정의에서 멤버를 초기화해야 한다. 
이러한 이니셜라이저가 없으면 멤버는 초기화되지 않으며,
멤버 함수 Volume() 호출은 가비지 값을 생성하게 된다.
일반적으로 암시적 기본 생성자를 사용하지 않는 경우에도 이러한 방식으로 멤버를 초기화하는 것이 좋다.

또한 컴파일러가 기본 생성자를 삭제된 것으로 정의해서 
암시적으로 기본 생성자를 생성하지 못하게 막는 방법이 있다.

    // Default constructor
    Box() = delete;

이는 주요 클래스가 작업 실수로 다른 곳에서 생성되는 문제를 사전에 방지할 수 있게 한다.

컴파일러에서 생성된 기본 생성자는 클래스 멤버가 기본 생성 가능하지 않은 경우 삭제된 것으로 정의된다. 
예를 들어 클래스 형식의 모든 멤버와 클래스 형식 멤버에는 
액세스할 수 있는 기본 생성자 및 소멸자가 있어야 한다.
즉, 참조 형식의 모든 데이터 멤버와 모든 const 멤버에는 기본 멤버 이니셜라이저가 있어야 한다.

그렇지 않은 경우 컴파일러 딴에서 경고가 발생하게 된다.


또한, 만약 기본이 아닌 생성자가 선언된 경우 컴파일러는 기본 생성자를 제공하지 않는다.
따라서 myclass mc(); 와 같이 대괄호 구문만을 이용해 클래스 개체를 생성할 수 없게 된다.

*/ 

class Box {
public:
    // Default constructor
    // 기본 생성자의 형태, 따로 클래스에 선언된 생성자가 없는 경우 임시적으로 inline 기본 생성자를 제공함
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    // 생성자 호출과 함께 멤버 변수의 초기화를 동시에 진행
    // 생성자는 explicit 또는 friendconstexpr 를 사용해 inline 선언될 수 있음.
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

    // Initialize a Box with custom dimensions
    // 생성자는 오버로드가 가능함
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};

int main()
{
    Box b; // Calls Box()

    // Using uniform initialization (preferred):
    Box b2{ 5 }; // Calls Box(int)
    Box b3{ 5, 8, 12 }; // Calls Box(int, int, int)

    // Using function-style notation:
    // 함수 형태로도 사용 가능
    Box b4(2, 4, 6); // Calls Box(int, int, int)
}
