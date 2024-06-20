// 구조체 포인터 선언 보자

struct Vector2
{
	int x;
	int y;
};

int main()
{
	Vector2 p1;

	Vector2* vp = &p1;

	(*vp).x = 100;
	(*vp).y = 100;

	//*(vp.x) = 200;
	// .연산자가 *연사자보다 우선순위가 높기 떄문에
	// 제대로 구조체 변수에 접근할수 없다.

	// -> 포인터 연산자
	(*vp).x = 100;
	vp->x = 100;
}
