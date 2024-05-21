

// EX2 복사 생성자
/*

복사 생성자는 동일한 형식의 개체에서 멤버 값을 복사하여 개체를 초기화한다.
클래스 멤버가 스칼라 값과 같은 모든 단순 형식인 경우, 
컴파일러에서 생성된 복사 생성자로 충분하며 직접 정의할 필요가 없다. 


클래스에 더 복잡한 초기화가 필요한 경우 사용자 지정 복사 생성자를 구현해야 한다.
예를 들어, 클래스 멤버가 포인터인 경우 복사 생성자를 정의하여 새 메모리를 할당하고 
다른 클래스의 개체에서 값을 복사해야 한다.

이 경우 컴파일러에서 생성된 복사 생성자는 
새 포인터가 다른 포인터의 메모리 위치를 가리키도록 포인터를 복사하기만 하면 된다.

*/

#include <string>
using namespace std;

class Box {

	Box(Box& other); // Avoid if possible--allows modification of other.
	Box(const Box& other);
	Box(volatile Box& other);
	Box(volatile const Box& other);

	// Additional parameters OK if they have default values
	Box(Box& other, int i = 42, string label = "Box");

};

/*

복사 생성자를 정의할 때 복사 할당 연산자(=)도 정의해야 한다.

일반 생성자처럼 복사 생성자도 삭제된 것으로 정의하여 개체가 복사되지 않도록 방지할 수 있다.

  Box (const Box& other) = delete;

이렇게 하면 개체 복사를 시도하는 코드가 존재하는 경우, 
삭제된 함수를 참조하려고 하기 때문에 오류가 발생한다.

*/