#include <iostream>

using namespace std;

char arr[3][3] =
{
	{ 'D', 'A', 'S' },
	{ 'Q', 'W', 'V' },
	{ 'R', 'T', 'Y' }
};

void Find(int* y1, int* x1, int* y2, int* x2
, char* result1, char* result2)
{
	*result1 = arr[*y1][*x1];
	*result2 = arr[*y2][*x2];
}



int main()
{
	int y1 = 0, y2 = 0, x1 = 0, x2 = 0;

	char result1 = ' ', result2 = ' ';

	cin >> y1 >> x1;
	cin >> y2 >> x2;

	Find(&y1, &x1, &y2, &x2, &result1, &result2);

	cout << result1 << " " << result2;

	return 0;
}