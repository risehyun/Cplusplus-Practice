// ����ü ������ ���� ����

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
	// .�����ڰ� *�����ں��� �켱������ ���� ������
	// ����� ����ü ������ �����Ҽ� ����.

	// -> ������ ������
	(*vp).x = 100;
	vp->x = 100;
}