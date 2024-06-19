int main()
{
	//포인터 타입 복습

	unsigned int addressNumber = 0;
	//주소는 숫자니까 사실 인트에 저장해도 상관이 없다.

	int a = 0;
	addressNumber = (unsigned int)&a;

	// 포인터 변수에 * 을찍어서 
	// 해당 주소에 위치(변수)로 이동할수 있다.
	// 또는 가르킨다 라고 한다.


	return 0;
}