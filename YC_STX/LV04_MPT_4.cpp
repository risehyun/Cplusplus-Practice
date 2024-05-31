#include <iostream>

using namespace std;
int main()
{
	int G = 0;

	int* p = &G;
	int** t = &p;

	int* K = &G;
	int** Q = &K;

	cin >> G;


	cout << **t << " " << *K;


	return 0;
}