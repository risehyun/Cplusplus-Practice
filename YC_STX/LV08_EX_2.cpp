/*

* 조건 *
 다량의 ABC 세종류의 카드를 가지고 있다.
 이 중 3장의 카드를 뽑을때 모든 조합을 출력하라.
 (단, 같은 카드를 연속 2장을 뽑으면 안된다.)

 */

#include <iostream>

using namespace std;

char path[5] = "";
void test(int level)
{
	if (level >= 2 && path[level - 2] == path[level - 1])
	{
		return;
	}

	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
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