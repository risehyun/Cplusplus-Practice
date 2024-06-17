#include <iostream>


char path[5] = "";
void test(int level)
{
	// 재귀함수를 일단 실행해서 진입은 하되 특정 구간에서 return을 해서 종료시켜 버리는 방식으로 특정 조건을 제외시킴
	// 조건이 간단한 경우 이렇게 처리하면 직관적임
	if (path[0] == 'A')
	{
		return;
	}

	if (level == 3)
	{
		std::cout << path << std::endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		// 재귀 함수 호출 전에 다음에 진입할 path를 미리 계산해서 제외조건에 해당하면 아예 진입조차 하지 않는 경우
		// 조건이 복잡하다면 위의 일단 진입후 return 시키는 것보다 여기서 체크하고 넘어가는 것도 좋음
		//if (level == 0 && ('A' + i) == 'A')
		//{
		//	continue;
		//}

		path[level] = 'A' + i;
		test(level + 1);
		path[level] = 0;
	}
}

int main()
{
	test(0);

	return 0;
}